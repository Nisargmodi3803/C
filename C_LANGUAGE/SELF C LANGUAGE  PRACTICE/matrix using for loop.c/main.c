/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

    for(i=1;i<5;i++)
        printf("%d\t",i);

    printf("\n");

    for(i=5;i<9;i++)
        printf("%d\t",i);

    printf("\n");

    for(i=9;i<13;i++)
        printf("%d\t",i);

    printf("\n");

    return 0;
}*/

#include<stdio.h>

int main()
{
    int i,j,k=1;

    for(i=1;i<=3;i++)
    {
        for(j=1;j<=4;j++)
        {
            printf("%d\t",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
