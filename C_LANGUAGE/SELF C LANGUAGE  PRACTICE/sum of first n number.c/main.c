#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0;

    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        sum+=i;
    printf("\nSum : %d\n",sum);
    return 0;
}
