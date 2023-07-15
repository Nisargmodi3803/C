/**
    Write a C program that shifts each element of an array to the left side by N positions.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],n,b[20],N,i;

    printf("Enter Size : ");
    scanf("%d",&n);

    printf("\nArray Elements\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nEnter Position to which you want to swifts array elements : ");
    scanf("%d",&N);

    for(i=0;i<n;i++)
    {
        b[i]=a[N+i];
    }

    for(i=0;i<N;i++)
    {
        b[i+n-N]=a[i];
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }


    return 0;
}
