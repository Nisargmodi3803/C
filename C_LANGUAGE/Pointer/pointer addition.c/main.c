#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={1,3,4,-5,-10,6,7};
    int *p=&a[0];

    printf("Value : %d\n",*p);
    printf("Address : %u\n",p);

    p+=3;
    printf("Value : %d\n",*p);
    printf("Address : %u\n",p);

    p++;
    printf("Value : %d\n",*p);
    printf("Address : %u\n",p);

    *p=10000;
    printf("Value : %d\n",*p);
    printf("Address : %u\n",p);

    return 0;
}
