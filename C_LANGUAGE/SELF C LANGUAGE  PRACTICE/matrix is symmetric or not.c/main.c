#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,a[10][10],t[10][10],flag=0;

    printf("nxn of matrix : ");
    scanf("%d",&n);

    printf("\nEnter the matrix A\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            t[j][i]=a[i][j];
        }
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=t[i][j])
            {
                flag=1;
                break;
            }
        }
    }

    if(flag==1)
        printf("Enter matrix A is not symmetric");

    else
        printf("Enter matrix A is symmetric");
    return 0;
}
