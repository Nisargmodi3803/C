#include <stdio.h>
#include <stdlib.h>

int main()
{
   const int a=12;
    const int *p=&a;

   // *p=13;
    printf("%d",a);
    return 0;
}
