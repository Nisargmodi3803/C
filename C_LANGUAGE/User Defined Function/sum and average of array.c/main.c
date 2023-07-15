#include <stdio.h>
#include <stdlib.h>

void avg(int[],int);
int main()
{
    int a[20],n,i;

    printf("Enter the number of array Element : ");
    scanf("%d",&n);

    printf("\nEnter the array Element \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    avg(a,n);

    return 0;
}

void avg(int a[],int n)
{
    int i,sum=0;
    float average=0;

    for(i=0;i<n;i++)
        sum+=a[i];

    average=sum*1.0/n;

    printf("\nSum of array Element is %d\n",sum);

    printf("\nAverage of array Element is %f\n",average);
}
