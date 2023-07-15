/* Write a program to change the value of a variable to ten times its current value.
    write a function and pass the value by reference....*/

/*
#include <stdio.h>
#include <stdlib.h>

void fun(int*);

int main()
{
    int a=22;

    printf("Value before function is %d\n",a);

    fun(&a);

    printf("Value after after function is %d\n",a);

    return 0;
}

void fun(int *a)
{
    *a=(*a)*10;
}
*/


#include <stdio.h>
#include <stdlib.h>

void fun(int);

int main()
{
    int a=22;

    printf("Value before function is %d\n",a);

    fun(a);

    printf("Value after after function is %d\n",a);

    return 0;
}

void fun(int a)
{
    a=a*10;
}
