/* write a function which add two three dimensional vector */

#include <stdio.h>
#include <stdlib.h>

typedef struct vector
{
    int x;
    int y;
    int z;
}vector;

vector v1,v2,sum;

void sumvector(vector ,vector );
void display(vector ,vector ,vector );

int main()
{
    printf("Enter Dimension of vector v1\n");
    printf("X Dimension : ");
    scanf("%d",&v1.x);

    printf("Y Dimension : ");
    scanf("%d",&v1.y);

    printf("Z Dimension : ");
    scanf("%d",&v1.z);

    printf("\nEnter Dimension of vector v2\n");
    printf("X Dimension : ");
    scanf("%d",&v2.x);

    printf("Y Dimension : ");
    scanf("%d",&v2.y);

    printf("Z Dimension : ");
    scanf("%d",&v2.z);

    sumvector(v1,v2);

    return 0;
}

void sumvector(vector v1,vector v2)
{
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    sum.z=v1.z+v2.z;

    display(v1,v2,sum);
}

void display(vector v1,vector v2,vector sum)
{
    printf("\nv1 = %di + %dj + %dk\n",v1.x,v1.y,v1.z);

    printf("\nv2 = %di + %dj + %dk\n",v2.x,v2.y,v2.z);

    printf("\nSum of Vector\n");
    printf("sum = %di + %dj + %dk\n",sum.x,sum.y,sum.z);

}
