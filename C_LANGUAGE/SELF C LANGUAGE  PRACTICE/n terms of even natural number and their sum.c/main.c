#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0,flag=0;

    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            flag=1;
            printf("%d ",i);
            sum+=i;
        }
    }

    if(flag==1)
        printf("\nSum of  first %d even number is %d",n/2,sum);

    else
        printf("ERROR!!! \n Enter natural number");

    return 0;
}

