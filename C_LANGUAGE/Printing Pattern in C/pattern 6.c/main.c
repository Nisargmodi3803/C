#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;

    printf("Enter Size : ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if((i+j)<=n)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
