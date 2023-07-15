#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],n,i;

    printf("Enter the number whose multiplication table you want : ");
    scanf("%d",&n);

    for(i=0;i<10;i++)
        a[i]=n*(i+1);

    for(i=0;i<10;i++)
        printf("%d x %d = %d\n",n,i+1,a[i]);


    return 0;
}
