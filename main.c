#include<stdio.h>
#include"my_mat.h"
#define N 10
int main()
{
    char b;
    int a[10][10];
    while (1)
    {
        scanf("%c",&b);
        if(b == 'A')
        {   
            A(a,N);
            scanf("%c",&b);
        }
        if(b == 'B')
        {
            int num1;
            int num2;
            scanf("%d%d",&num1,&num2);
            B(a,num1,num2);
            scanf("%c",&b);
        }
        if(b == 'C')
        {
            int num1;
            int num2;
            scanf("%d%d",&num1,&num2);
            C(a,num1,num2);
            scanf("%c",&b);
        }
        if(b == 'D')
        {
            break;
        }
    }    
}
