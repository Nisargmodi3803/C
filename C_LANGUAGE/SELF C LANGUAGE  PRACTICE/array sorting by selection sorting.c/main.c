#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],i,j,n,temp,min;

    printf("Enter Size : ");
    scanf("%d",&n);

    printf("Enter the Array Elements \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    //SELECTION SORTING.....

    for(i=0;i<n-1;i++)
    {
        min=i;

        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    printf("\nAfter Sorting Array Elements are\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);

    return 0;
}
