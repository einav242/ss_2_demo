all: connections

connections: main.o my_mat.o
	gcc -Wall -o connections main.o my_mat.o

main.o: main.c my_mat.h
	gcc -wall -c main.c

my_mat.o: my_mat.c my_mat.h
	gcc -wall -c my_mat.c

.PHONY: clean all
	
clean:
	rm -f *.o connections