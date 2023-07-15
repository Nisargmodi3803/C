#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],i,j,n;

    printf("Enter Size : ");
    scanf("%d",&n);

    printf("\nEnter 2D Array Element\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",(*(a+i))+j);
        }
    }

    printf("\n\n\nElement of 2D Array Element are\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",*(*(a+i)+j));
        }
        printf("\n");
    }
    return 0;
}
