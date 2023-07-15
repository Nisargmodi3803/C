#include <stdio.h>
#include <stdlib.h>

int sum(int,int);

int main()
{
    int (*ptr)(int,int)=sum;
    int s = ptr(10,22);

    printf("Sum=%d",s);

    return 0;
}

int sum(int a,int b)
{
    return a+b;
}
