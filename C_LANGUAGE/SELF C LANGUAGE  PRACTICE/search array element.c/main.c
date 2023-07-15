#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],i,n,flag=0,b,pos=0;

    printf("Enter the number of array elements : ");
    scanf("%d",&n);

    printf("\nEnter the array elements\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nEnter the array element that you want to search : ");
    scanf("%d",&b);

    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            flag=1;
            pos=i+1;
        }

    }

    if(flag==1)
        printf("\nPosition of %d is %d\n",b,pos);

    else
        printf("\nElement not found\n");

    return 0;
}
