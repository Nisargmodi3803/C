#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={0,1,3,45,9,8};
    int *p=&a[3];

   printf("%d %d %d",--(*p),(*p)++,++(*p));

    return 0;
}
