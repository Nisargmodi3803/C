#include<stdio.h>

void swap(int,int);

int main()
{
    int a,b;

    printf("Enter Two Integer : ");
    scanf("%d %d",&a,&b);

    printf("\nBefore Swapping numbers are %d and %d\n",a,b);
    swap(a,b);

    return 0;
}

void swap(int a,int b)
{
    int temp;

    temp=a;
    a=b;
    b=temp;

    printf("\nAfter swapping numbers are %d and %d\n",a,b);
}

