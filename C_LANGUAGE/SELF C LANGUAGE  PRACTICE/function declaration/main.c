#include<stdio.h>

void sum();     //Type 1

int main()
{
    sum();
}

void sum()
{
    int sum,a,b;

    printf("Enter two number : \n");
    scanf("%d %d",&a,&b);

    sum = a+b;
    printf("sum is %d",sum);
}

/*#include<stdio.h>

int sum(int a,int b);       //Type 2

int main()
{
    int a,b,c;
    printf("Enter two number : \n");
    scanf("%d %d",&a,&b);
    sum(a,b);
    printf("sum is %d",sum(a,b));

}

int sum(int a,int b)
{
    int sum;

    sum = a+b;

    return sum;

}*/
