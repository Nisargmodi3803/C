/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],i,j,ra,ca,b[10][10];

    printf("Enter the Number of Rows of matrix a : ");
    scanf("%d",&ra);

    printf("\nEnter the number of coloums of matrix a : ");
    scanf("%d",&ca);

    printf("\nEnter the Matrix a : \n");

    for(i=0;i<ra;i++)
    {
        for(j=0;j<ca;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nMatrix a is : \n");

     for(i=0;i<ra;i++)
    {
        for(j=0;j<ca;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

     for(i=0;i<ca;i++)
    {
        for(j=0;j<ra;j++)
        {
            b[i][j] = a[j][i];
        }

    }

    printf("\nTranspose of matrix of a : \n");

     for(i=0;i<ca;i++)
    {
        for(j=0;j<ra;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],i,j,ra,ca,b[10][10];

    printf("Enter the Number of Rows of matrix a : ");
    scanf("%d",&ra);

    printf("\nEnter the number of coloums of matrix a : ");
    scanf("%d",&ca);

    printf("\nEnter the Matrix a : \n");

    for(i=0;i<ra;i++)
    {
        for(j=0;j<ca;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nMatrix a is : \n");

     for(i=0;i<ra;i++)
    {
        for(j=0;j<ca;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of matrix a is : \n");

     for(i=0;i<ca;i++)
    {
        for(j=0;j<ra;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}

