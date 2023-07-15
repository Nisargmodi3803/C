#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,y,d,t;

    printf("Enter the total numbers of days : ");
    scanf("%d",&n);

    y=n/365;
    t=n%365;
    m=t/30;
    d=m%30;

    printf("\nYear : %d Months : %d Days : %d",y,m,d);

    return 0;
}
