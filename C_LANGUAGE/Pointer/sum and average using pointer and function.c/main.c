#include <stdio.h>
#include <stdlib.h>

void sum_and_avg(int a,int b,int*sum,float*avg);

int main()
{
    int a,b,sum;
    float avg;

    printf("Enter the two Numbers\n");
    scanf("%d %d",&a,&b);

    sum_and_avg(a,b,&sum,&avg);

    printf("sum is %d\nAverage is %f",sum,avg);

}

void sum_and_avg(int a,int b,int*sum,float*avg)
{
    *sum = a+b;
    *avg = (float)(*sum)/2;
}
