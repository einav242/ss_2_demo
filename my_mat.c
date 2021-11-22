#include "my_mat.h"
#include <stdio.h>
#define N 10
#define max 100000

int min(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}

void algo(int mat[][N],int n)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i!=j && mat[i][j] == 0)
            {
                mat[i][j]=max;
            }
        }
    }
    for(int k=0;k<N;k++)
    {
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
            }
        }
    }

}
void A(int a[][N],int n)
{
    int b;
    for(int i=0; i<N;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b);
            a[i][j]=b;
        }
    }
}
void B(int mat[][N],int a,int b)
{
    int temp[N][N];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            temp[i][j]=mat[i][j];
        }
    }     
    algo(temp,N);
    if(temp[a][b]!=max && a!=b)
    {
        printf("True \n");
        return;
    }
    printf("False \n");
}
void C(int mat[][N],int a,int b)
{
    int temp[N][N];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            temp[i][j]=mat[i][j];
        }
    }   
    algo(temp,N);
    if(temp[a][b] == max || a == b)
    {
        printf("%d \n",-1);
        return;
    }
    printf("%d \n",temp[a][b]);
    return;
}

 


