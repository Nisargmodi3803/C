#include <stdio.h>
#include <stdlib.h>

void cal(float ,float ,char );
int main()
{
    float a,b;
    char op;

    printf("Enter the Number 1 : ");
    scanf("%f",&a);

    printf("\nEnter the number 2 : ");
    scanf("%f",&b);

    printf("\nEnter the operator to be performed : ");
    scanf(" %c", &op);

    cal(a,b,op);

    return 0;
}

void cal(float a,float b,char op)
{

    switch(op)
    {
        case '+':
            printf("\nAddition of %f and %f is %f",a,b,a+b);
            break;

        case '-':
            printf("\nsubtraction of %f and %f is %f",a,b,a-b);
            break;

        case '*':
            printf("\nMultiplication of %f and %f is %f",a,b,a*b);
            break;

        case '/':
            printf("\nDivision of %f and %f is %f\n",a,b,a/b);
            break;

        default:
            printf("\nERROR!!! Invalid Operator\n");

    }
}
