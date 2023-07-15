/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,min,hcf,i;

    printf("Enter the two positive number : \n");
    scanf("%d %d",&n1,&n2);

    min=(n1<n2)? n1:n2;


    for(i=1;i<=min;i++)
    {
        if(n1%i==0 && n2%i==0)
            hcf=i;
    }

    printf("HCF of %d and %d is %d",n1,n2,hcf);

    return 0;
}*/

//USER DEFINED FUNCTION-->
#include <stdio.h>
#include <stdlib.h>

int hcf(int ,int ,int );
int main()
{
    int n1,n2,min,gcd;

    printf("Enter the two positive number : \n");
    scanf("%d %d",&n1,&n2);

    min=(n1<n2)? n1:n2;

    gcd=hcf(n1,n2,min);

    printf("Inside main(function calling): \n");
    printf("HCF of %d and %d is %d\n",n1,n2,gcd);

    return 0;
}
int hcf(int n1,int n2,int min)
{
    int i,gcd;
     for(i=1;i<=min;i++)
    {
        if(n1%i==0 && n2%i==0)
            gcd=i;
    }
    printf("\nInside hcf(function called) : \n");
    printf("HCF of %d and %d is %d\n\n",n1,n2,gcd);
    return gcd;
}
