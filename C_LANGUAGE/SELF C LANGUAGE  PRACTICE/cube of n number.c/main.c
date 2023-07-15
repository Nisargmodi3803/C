#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,cube;

    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        cube = i*i*i;
        printf("%d\t",cube);
    }


    return 0;
}
