#include<stdio.h>

void add(int a[][10],int b[][10], int n);

int main()
{
    int a[10][10],b[10][10],n ,i, j;

    printf("Enter order nxn : ");
    scanf("%d",&n);

    printf("\nEnter the matrix A\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter the matrix B\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    add(a,b,n);

    return 0;

}

void add(int a[][10], int b[][10], int n)
{
    int c[10][10],i,j;

    printf("\nAddition of matrix A and B\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
