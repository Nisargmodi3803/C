/* Create Three Dimensional Vector using structure */

#include <stdio.h>
#include <stdlib.h>

struct vector
{
    int x;
    int y;
    int z;
}v1;

int main()
{
    printf("Enter x Dimensional of Vector : ");
    scanf("%d",&v1.x);

    printf("Enter y Dimensional of Vector : ");
    scanf("%d",&v1.y);

    printf("Enter z Dimensional of Vector : ");
    scanf("%d",&v1.z);

    printf("\nNow Vector is\n");

    printf("v1 = %di + %dj + %dk\n",v1.x,v1.y,v1.z);

    return 0;
}
