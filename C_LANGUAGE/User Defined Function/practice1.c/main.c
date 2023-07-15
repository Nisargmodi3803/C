#include <stdio.h>
#include <stdlib.h>

int jumble(int x, int y)
{
    x=x*2+y;
    return x;
}
int main()
{
    int x=2,y=5,z;

    y=jumble(y,x);
    x=jumble(y,x);
    z=jumble(y,x);
    printf("%d\n",z);

    return 0;
}
