/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    char op;

    printf("Enter the number 1 : ");
    scanf("%f",&a);

    printf("\nEnter the number 2 : ");
    scanf("%f",&b);

    printf("Enter the operator to be performed : ");
    scanf(" %c",&op);

    switch(op)
    {
    case '+':
        printf("%f",a+b);
        break;
    case '-':
        printf("%f",a-b);
        break;
    case '*':
        printf("%f",a*b);
        break;
    case '/':
        printf("%f",a*1.0/b);
        break;
    default:
        printf("ERROR");
    }


    return 0;
}*/

#include<stdio.h>

int main()
{
    float a,b;
    char op;

    printf("Enter the number 1 : ");
    scanf("%f",&a);

    printf("\nEnter the number 2 : ");
    scanf("%f",&b);

    printf("Enter the operator to be performed : ");
    scanf(" %c",&op);


    if(op=='+')
        printf("%f",a+b);
    else if(op=='-')
        printf("%f",a-b);
    else if(op=='*')
        printf("%f",a*b);
    else if(op=='/')
        printf("%f",a/b);
    else
        printf("ERROR");
}
