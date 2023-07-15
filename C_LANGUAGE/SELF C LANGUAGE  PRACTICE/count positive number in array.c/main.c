#include <stdio.h>
#include <stdlib.h>

void p_count(int[] ,int );

int main()
{
    int a[100],i,n;

    printf("Enter Size : ");
    scanf("%d",&n);

    printf("Enter the Array ELement : ");
    for(i=0;i<n;i++)
        scanf("%d",(a+i));

    p_count(a,n);

    return 0;
}

void p_count(int a[],int n)
{
    int i,count=0;

    for(i=0;i<n;i++)
    {
        if(*(a+i)>0)
        {
            count++;
        }
    }

    printf("Number of Positive Number in an Array is %d",count);

}
