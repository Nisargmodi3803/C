/*
//Without Return Statement....
#include <stdio.h>
#include <stdlib.h>

void fact(int );

int main()
{
    int n;

    printf("Enter the number who's factorial want to find : ");
    scanf("%d",&n);

    fact(n);

    return 0;
}

void fact(int n)
{
    int i,fact=1;

    for(i=1;i<=n;i++)
        fact*=i;

    printf("factorial of %d is %d",n,fact);
}*/



//With Return Statement....
#include <stdio.h>
#include <stdlib.h>

int fact(int );

int main()
{
    int n,f;

    printf("Enter the number who's factorial want to find : ");
    scanf("%d",&n);

    f=fact(n);

    printf("factorial of %d is %d",n,f);

    return 0;
}

int fact(int n)
{
    int i,fact=1;

    for(i=1;i<=n;i++)
        fact*=i;

    return fact;
}
