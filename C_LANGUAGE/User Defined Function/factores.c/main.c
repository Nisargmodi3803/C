/**
    Write a user define function Factors( ) that finds all the possible factors for the given
    number.
*/

#include <stdio.h>
#include <stdlib.h>

void factors(int );

int main()
{
    int n;

    printf("Enter Positive Integer : ");
    scanf("%d",&n);

    factors(n);

    return 0;
}

void factors(int n)
{
    int i;

    printf("\nFactors of %d are : ",n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d ",i);
    }

    printf("\n");
}
