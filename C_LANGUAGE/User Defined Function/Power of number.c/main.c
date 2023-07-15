/*
//Without Return statement...
#include<stdio.h>

void power(int ,int );

int main()
{
    int n,p;

    printf("Enter the Base of number : ");
    scanf("%d",&n);

    printf("Enter the power of number : ");
    scanf("%d",&p);

    power(n,p);

    return 0;
}

void power(int n,int p)
{
    int i,pow=1;

    for(i=1;i<=p;i++)
        pow*=n;

    printf("%d^%d=%d",n,p,pow);

}*/

//With Return statement...
#include<stdio.h>

int power(int ,int );

int main()
{
    int n,p,pow;

    printf("Enter the Base of number : ");
    scanf("%d",&n);

    printf("Enter the power of number : ");
    scanf("%d",&p);

    pow=power(n,p);

    printf("%d^%d=%d",n,p,pow);

    return 0;
}

int power(int n,int p)
{
    int i,pow=1;

    for(i=1;i<=p;i++)
        pow*=n;

    return pow;

}
