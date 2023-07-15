#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i;

    printf("Enter the Size : ");
    scanf("%d",&size);

    int *q = (int*)calloc(size,sizeof(int));

    if(*q==0)
        printf("Memory Allocation fail\n");

    for(i=0;i<size;i++)
        scanf("%d",(q+i));

    for(i=0;i<size;i++)
    {
        printf("Value at address %d is %d\n",q+i,*(q+i));
    }

        free(q);
    for(i=0;i<size;i++)
    {
        printf("Value at address %d is %d\n",q+i,*(q+i));
    }

    return 0;
}
