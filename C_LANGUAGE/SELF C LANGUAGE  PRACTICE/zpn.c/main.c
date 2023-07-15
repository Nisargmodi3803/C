#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    if(n==0)
        printf("%d is zero",n);
    else if(n<0)
        printf("%d is negative",n);
    else
        printf("%d is positive",n);

    return 0;
}
