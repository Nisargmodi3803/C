#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,mul;

    printf("Enter the number whose multiplication table you want : ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        mul=n*i;
        printf("\n%d x %d = %d\n",n,i,mul);
    }
    return 0;
}
