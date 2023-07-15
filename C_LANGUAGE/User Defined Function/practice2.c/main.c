#include <stdio.h>
#include <stdlib.h>

int inc(int i)
{
    static int count=0;
    count+=i;
    return count;
}

int main()
{
    int i,j;

    for(i=0;i<=4;i++)
        j=inc(i);

    printf("j=%d\n",j);

    return 0;
}
