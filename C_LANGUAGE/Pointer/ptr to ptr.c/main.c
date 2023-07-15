#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=102;
    int *ptr=&i;
    int **p=&ptr;

    printf("Value of i is %d\n",i);
    printf("Value of i is %d\n",*ptr);
    printf("Value of i is %d\n",**p);

    return 0;
}
