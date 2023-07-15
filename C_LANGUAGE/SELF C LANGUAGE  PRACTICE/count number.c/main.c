#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,count=0,c;

    printf("Enter the number : ");
    scanf("%d",&n);

    printf("\nEnter the number to be count : ");
    scanf("%d",&c);

    while(n>0)
    {
        i=n%10;

        if(i==c)
            count++;

        n=n/10;
    }

    printf("\nNumber Entered by user repeat %d times\n",count);

    return 0;
}
