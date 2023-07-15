#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fah,cel;

    printf("Enter the temperature in fahrenheit : ");
    scanf("%f",&fah);

    cel=(fah-32)/1.8;

    printf("Temperature in celcius is %f",cel);

    return 0;
}
