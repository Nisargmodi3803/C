#include <stdio.h>
#include <stdlib.h>

int sort(int n,int a[]);
int main()
{
    int i,n,a[20];

    printf("Enter the number : ");
    scanf("%d",&n);

    printf("\nEnter array elements\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    sort(n,a[i]);


    return 0;
}

int sort(int n,int a[])
{
    int i,j,temp;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)\
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("\nAfter sorting \n");

    for(i=0;i<n;i++)
        printf("%d\n",a[i]);

}
