/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10,b=5;
    int *p,*q;
    p=&a;
    q=p;

    printf("a = %d %d %d",a,*p,*q);

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10,b=5;
    int *p,*q;
    p=&a;
    q=&b;
    *q=*p;

    printf("a = %d %d %d",a,*p,*q);
    printf("\nb = %d",b);

    return 0;
}
