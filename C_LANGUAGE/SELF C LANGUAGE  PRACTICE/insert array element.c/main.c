#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],i,n,b,pos;

    printf("Enter the number of array element : ");
    scanf("%d",&n);

    printf("\nEnter the array element\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nEnter the number that you want to insert : ");
    scanf("%d",&b);

    printf("\nEnter the position of number that you want to insert : ");
    scanf("%d",&pos);

    for(i=n;i>=pos;i--)
        a[i]=a[i-1];

    a[pos]=b;

    printf("\nNew Array\n");

    for(i=0;i<=n;i++)
        printf("%d\n",a[i]);

    return 0;
}
