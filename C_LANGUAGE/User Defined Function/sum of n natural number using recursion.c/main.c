#include <stdio.h>
#include <stdlib.h>

int sum(int );
int main()
{
    int n,s;
    printf("Enter the number : ");
    scanf("%d",&n);

    s=sum(n);

    printf("Sum: %d",s);
    return 0;
}

int sum(int a)
{
    int s;

    if(a==1)
        return ;
    else
    {
        s = a + sum(a-1);
        return s;
    }
}
