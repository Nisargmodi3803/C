#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n;

    printf("Enter the Dimension of both matrix A and B(nxn): ");
    scanf("%d",&n);

    printf("\nEnter the Matrix A\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }

    printf("\nEnter the Matrix B\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }

    }

     printf("\nAddition of Matrix A and B\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");

    }
    return 0;
}
