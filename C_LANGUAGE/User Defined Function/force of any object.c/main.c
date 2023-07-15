#include <stdio.h>
#include <stdlib.h>

float force(float m);

int main()
{
    float m;

    printf("Enter Mass of Object : ");
    scanf("%f",&m);

    printf("\nForce of Object Having Mass %f is %f\n",m,force(m));

    return 0;
}

float force(float m)
{
    float g=9.8;

    return m*g;
}
