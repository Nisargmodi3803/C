#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],i,j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            a[i][j]=(i+1)*(j+1);
            printf("%d x %d = %d\n",i+1,j+1,*(*(a+i)+j));
        }
        printf("\n");
    }

    return 0;
}
