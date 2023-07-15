#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m,s,t,n;

    printf("Enter the time in second : ");
    scanf("%d",&n);

    h=n/3600;
    t=n%3600;
    m=t/60;
    s=m%60;

    printf("\n%d:%d:%d",h,m,s);

    return 0;
}
