#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;

    printf("Enter size : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",64+j);
        }
        printf("\n");
    }

    return 0;
}