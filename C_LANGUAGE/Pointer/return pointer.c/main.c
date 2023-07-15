#include<stdio.h>

int* returnpointer(int[]);

int main()
{
    int a[10],*p,n,i;

    printf("Enter Size : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",(a+i));

    p=returnpointer(a);

    printf("\nValue is %d\n",*p);

    return 0;
}

int* returnpointer(int q[])
{
    q=q+3;

    return q;
}
