#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50],i,sum=0,n;
    float avg;

    printf("Enter the number of element : ");
    scanf("%d",&n);

    printf("\nArray Elements are : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=i;
    }

    printf("\nSum of %d elements in array is %d\n",n,sum);

    avg=sum*1.0/n;

    printf("\nAverage of %d elements in array is %f\n",n,avg);


    return 0;
}
