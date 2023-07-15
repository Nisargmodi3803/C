/**
    Write a program to add two distances in inch-feet using structure.
    The values of the distances is to be taken from the user.

    1 feet = 12 inch
*/

#include <stdio.h>
#include <stdlib.h>

struct distance
{
    int feet;
    float inch;
}d1,d2;

void display(struct distance ,struct distance );
struct distance dist_add(struct distance,struct distance);

int main()
{
    struct distance d;

    printf("For Distance 1\n");
    printf("Enter Feet : ");
    scanf("%d",&d1.feet);
    printf("Enter inch : ");
    scanf("%f",&d1.inch);

    printf("\nFor Distance 2\n");
    printf("Enter Feet : ");
    scanf("%d",&d2.feet);
    printf("Enter inch : ");
    scanf("%f",&d2.inch);

    display(d1,d2);

    d=dist_add(d1,d2);

    printf("\nAddition of Two Distance\n");
    printf("d = %d\' %0.1f\"\n",d.feet,d.inch);

    return 0;
}

display(struct distance d1,struct distance d2)
{
    printf("\n\nDistance Representation in inch-feet");
    printf("\nd1 = %d\' %0.1f\"\n",d1.feet,d1.inch);
    printf("d2 = %d\' %0.1f\"\n ",d2.feet,d2.inch);
}

struct distance dist_add(struct distance d1,struct distance d2)
{
    struct distance d;

    d.feet = d1.feet + d2.feet;
    d.inch = d1.inch + d2.inch;

    if(d.inch >= 12.0)
    {
        d.inch-=12.0;
        d.feet+=1;
    }

    return d;
};
