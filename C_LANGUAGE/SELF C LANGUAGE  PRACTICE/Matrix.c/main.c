/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][2],b[3][2],i,j,c[3][2];

    printf("Enter the matrix A : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter the matrix B : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nSum of Matrix A and B is  : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

#include<stdio.h>

int main()
{
    int a[2][3],b[3][2],c[4][4],i,j,k;

    printf("Enter the matrix A : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter the matrix B : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nMultiplication  of Matrix A and B is  : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
