#include <stdio.h>
#include <stdlib.h>

void rev(int[],int);

int main()
{
    int a[10],i,n;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("\nEnter the array Element\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    rev(a,n);



    return 0;
}

void rev(int a[] ,int n)
{
    int b[10],i,j;

    printf("\nReverse of array Element\n");

    for(i=n,j=0;i>=0,j<n;i--,j++)
    {
        b[j]=a[i-1];
        printf("%d\n",b[j]);

    }
}
