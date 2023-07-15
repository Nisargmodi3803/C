#include<stdio.h>

void mult(int a[][10],int b[][10],int ,int ,int ,int );

int main()
{
    int a[10][10],b[10][10],i,j,ra,ca,cb,rb;

    printf("Enter the Row and Column of Matrix A : ");
    scanf("%d %d",&ra,&ca);

    printf("\nEnter the Row and Column of Matrix B : ");
    scanf("%d %d",&rb,&cb);

    if(ca!=rb)
        printf("\nMatrix Multiplication is not possible\n");

    else
    {
        printf("\nEnter the matrix A\n");

        for(i=0;i<ra;i++)
        {
            for(j=0;j<ca;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("\nEnter the Matrix B\n");

        for(i=0;i<rb;i++)
        {
            for(j=0;j<cb;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

        mult(a,b,ra,ca,rb,cb);
    }

    return 0;

}

void mult(int a[][10], int b[][10],int ra,int ca,int rb,int cb)
{
    int c[10][10],k,i,j;

    printf("\nMultiplication of matrix A and B\n");

    for(i=0;i<ra;i++)
    {
        for(j=0;j<cb;j++)
        {
            c[i][j]=0;
            for(k=0;k<ca;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
