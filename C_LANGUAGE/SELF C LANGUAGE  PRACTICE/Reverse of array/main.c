/* In Reverse of we run loop till n/2 because agar aapade loop n sudhi chalv su toh loop sidhi thai
    jase pachi ... (half sudhi chalv su toh reverse thai jase pachi)*/

#include <stdio.h>
#include <stdlib.h>

void reverse(int *a,int n);

int main()
{
    int a[10],n,i;

    printf("Enter Size : ");
    scanf("%d",&n);

    printf("Enter the Array Element\n");
    for(i=0;i<n;i++)
        scanf("%d",(a+i));

    reverse(a,n);

    printf("\nReverse Array is\n");
    for(i=0;i<n;i++)
        printf("%d\n",*(a+i));

    return 0;
}

void reverse(int *a,int n)
{
    int i,temp;

    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }


}
