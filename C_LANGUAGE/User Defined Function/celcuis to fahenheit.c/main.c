#include <stdio.h>
#include <stdlib.h>

float fah(float c);

int main()
{
    float c;

    printf("Enter temperature in Celcuis : ");
    scanf("%f",&c);

    printf("\n%f celcuis to Fahenheit is %f \n",c,fah(c));

    return 0;
}

float fah(float c)
{
    float f;

    f=32+c*9/5;

    return f;
}
