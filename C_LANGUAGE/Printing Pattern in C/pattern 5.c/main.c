#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;

    printf("Enter size : ");
    scanf("%d",&n);

    printf("\n");

    for(i=0;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
