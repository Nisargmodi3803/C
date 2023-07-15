#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10,b=9;
    int *p;

    p=(&a,&b);
    //p=&a,&b;

    printf("Value of A:%d\n",a);
    printf("Value of B:%d\n",b);
    printf("Value of A:%d\n",*p);
    printf("Value of B:%d\n",*p);

    /*printf("Address of A : %u\n",&a);
    printf("Address of A : %x\n",&a);
    printf("Address of A : %u\n",p);
    printf("Address of A : %x\n",p);

    printf("Address of p : %u\n",p);
    printf("Address of p : %x\n",p);*/


    return 0;
}
