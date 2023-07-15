#include<stdio.h>

void odd(int [],int);

int main()
{
    int a[50],n,i;

    printf("Enter size : ");
    scanf("%d",&n);

    printf("\nEnter Array Element\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    odd(a,n);

    return 0;
}

void odd(int a[],int n)
{
    int i,flag=0;

    printf("\nOdd numbers in array are \n");

    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            flag=1;
            printf("%d\n",a[i]);
        }

    }

    if(flag==0)
        printf("\nNO ODD NUMBER FOUND IN ARRAY\n");
}
