#include <stdio.h>
#include <stdlib.h>

int fun1(int );
int fun2(int );
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    printf("%d\n",fun1(n));

    return 0;
}

int fun1(int n)
{
    int a;
    if(n<=1)
        return 1;
    else
       a=n*fun2(n-1);
}

int fun2(int n)
{
    int a;
    if(n<=1)
        return 1;
    else
        a=n*fun1(n-1);
}
