#include<stdio.h>

int main()
{
    int a[10],i,j,n,temp;

    printf("Enter Size : ");
    scanf("%d",&n);

    printf("Enter the Array Element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nAfter Sorting\n");
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

    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}
