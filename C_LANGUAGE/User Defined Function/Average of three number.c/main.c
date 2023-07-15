#include <stdio.h>
#include <stdlib.h>

float average(int a,int b,int c);

int main()
{
    int a,b,c;

    printf("Enter Three Numbers\n");
    scanf("%d %d %d",&a,&b,&c);

    printf("\nAverage of number is %f\n",average(a,b,c));

    return 0;
}

float average(int a,int b,int c)
{
    float avg;
    int sum=a+b+c;

    avg = sum*1.0/3;

    return avg;
}
