#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,j,n;

    printf("Enter the number of array element : ");
    scanf("%d",&n);

    printf("\nEnter Array Element\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nEnter the position of array element that you want to delete : ");
    scanf("%d",&j);

    for(i=j;i<n-1;i++)
        a[i]=a[i+1];

     printf("\nNew Array Elements are\n");
    for(i=0;i<n-1;i++)
        printf("%d\n",a[i]);


    return 0;
}
