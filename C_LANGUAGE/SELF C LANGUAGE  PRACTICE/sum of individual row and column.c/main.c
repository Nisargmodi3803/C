#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],i,j,ra,ca,sr,sc;

    printf("Enter the Number of Rows of matrix a : ");
    scanf("%d",&ra);

    printf("\nEnter the number of coloums of matrix a : ");
    scanf("%d",&ca);

    printf("\nEnter the matrix : \n");

    for(i=0;i<ra;i++)
    {
        for(j=0;j<ca;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nMatrix A is \n");

     for(i=0;i<ra;i++)
    {
        for(j=0;j<ca;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<ra;i++)
    {
        sc=0,sr=0;
        for(j=0;j<ca;j++)
        {
                sc+=a[i][j];
                sr+=a[j][i];
        }
        printf("Sum of row is %d \t Sum of column is %d\n",sr,sc);
    }
    return 0;
}
