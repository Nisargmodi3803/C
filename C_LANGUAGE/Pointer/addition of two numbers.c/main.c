#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum;

    printf("Enter the a and b : ");
    scanf("%d %d",&a,&b);

    int *p=&a;
    int *q=&b;

    sum = *p + *q;

    printf("Sum : %d",sum);
    return 0;
}
