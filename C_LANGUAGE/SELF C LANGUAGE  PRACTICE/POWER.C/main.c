/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,p,pow=1;

    printf("Enter the base number : ");
    scanf("%d",&n);

    printf("\nEnter the power : ");
    scanf("%d",&p);

    for(i=1;i<=p;i++)
        pow*=n;

    printf("\n%d^%d --> %d\n",n,p,pow);

    return 0;
}*/

//USER DEFINED FUNCTION -->
#include <stdio.h>
#include <stdlib.h>

void power(int ,int );
int main()
{
    int n,p;

    printf("Enter the base number : ");
    scanf("%d",&n);

    printf("\nEnter the power : ");
    scanf("%d",&p);

    power(n,p);

    return 0;
}

void power(int n,int p)
{
    int pow=1,i;

     for(i=1;i<=p;i++)
        pow*=n;

    printf("\n%d^%d --> %d\n",n,p,pow);
}


