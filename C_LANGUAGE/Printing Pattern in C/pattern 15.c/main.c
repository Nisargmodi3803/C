#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,n;

    printf("Enter size : ");
    scanf("%d",&n);

    for(i=i;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",64+i);
        }
        printf("\n");
    }

    return 0;
}
