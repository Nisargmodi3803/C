#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],i,max,min,max_pos=0,min_pos=0,n,temp;

    printf("Enter the number of array element : ");
    scanf("%d",&n);

    printf("\nEnter the array element\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    max=a[0];
    min=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            max_pos=i;
        }

        if(a[i]<min)
        {
            min=a[i];
            min_pos=i;
        }
    }

    printf("\nMaximum number in array is %d\n",max);

    printf("\nMinimum number in array is %d\n",min);

    temp=a[max_pos];
    a[max_pos]=a[min_pos];
    a[min_pos]=temp;

    printf("\nArray element after swaping \n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);

    return 0;
}
