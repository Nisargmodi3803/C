#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],n,i,j,temp;

    printf("Enter Size : ");
    scanf("%d",&n);

    printf("Enter the array element\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //Bubble Sorting.....

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("After Sorting Array Elements Are\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);

    return 0;
}
