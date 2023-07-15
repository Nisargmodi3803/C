#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i;

    printf("Enter the Size : ");
    scanf("%d",&size);

    int *p = (int*)malloc(size*sizeof(int));

    if(*p==0)
        printf("Memory Allocation fail\n");

    for(i=0;i<size;i++)
        scanf("%d",(p+i));

    for(i=0;i<size;i++)
    {
        printf("Value at address %d is %d\n",p+i,*(p+i));
    }
        printf("%d",*(p+i));

    return 0;
}
