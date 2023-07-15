#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    //*p=20;
    //**q=30;
    //***r=40;

    printf("a=%d\n",a);
    printf("a=%d\n",*p);
    printf("a=%d\n",*(*q));
    printf("a=%d\n",*(*(*r)));


    return 0;
}
