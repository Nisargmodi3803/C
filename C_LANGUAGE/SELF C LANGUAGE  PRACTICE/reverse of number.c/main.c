#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rev=0,i;

    printf("Enter the number : ");
    scanf("%d",&n);

    while(n>0)
    {
       i=n%10;
       rev=rev*10+i;
       n=n/10;
    }

    printf("Reverse of number is %d",rev);

    return 0;
}
