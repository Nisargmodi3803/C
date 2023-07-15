#include<stdio.h>

void fibonnaci(int ,int ,int);

int main()
{
    int a=0,b=1,n;

    printf("Enter the number till that you want series : ");
    scanf("%d",&n);

    printf("\n");

    printf("%d %d ",a,b);

    fibonnaci(a,b,n);

    return 0;
}

void fibonnaci(int a,int b,int n)
{
    int c,i;

    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }

}
