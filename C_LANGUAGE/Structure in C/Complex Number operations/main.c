/**
    Write a program to add, subtract and multiply two complex numbers using structures to function.
    Take From User what He/She want to do Addition or Subtraction or Multiplication....
*/

#include <stdio.h>
#include <stdlib.h>

struct complex
{
    int img;
    int real;
}z1,z2;


void display(struct complex ,struct complex);

struct complex addition(struct complex ,struct complex );
struct complex subtraction(struct complex ,struct complex );
struct complex multiplication(struct complex ,struct complex );

int main()
{
    int op;
    struct complex add ,sub ,mul;

    printf("For Z1\n");
    printf("Enter Real part : ");
    scanf("%d",&z1.real);
    printf("Enter Imaginary part : ");
    scanf("%d",&z1.img);

    printf("\nFor Z2\n");
    printf("Enter Real part : ");
    scanf("%d",&z2.real);
    printf("Enter Imaginary part : ");
    scanf("%d",&z2.img);

    display(z1,z2);

    printf("\nPress 1 For Addition\nPress 2 For Subtraction\nPress 3 For Multiplication\n");
    printf("Enter your choice : ");
    scanf("%d",&op);

    switch(op)
    {
    case 1:
        printf("\nAddition of Two Complex Numbers\n");
        add = addition(z1,z2);
        printf("Z1 + Z2 = %d + %di\n",add.real,add.img);
        break;

    case 2:
        printf("\nSubtraction of Two Complex Numbers\n");
        sub = subtraction(z1,z2);
        printf("Z1 - Z2 = %d + %di\n",sub.real,sub.img);
        break;

    case 3:
        printf("\nMultiplication of Two Complex Numbers\n");
        mul = multiplication(z1,z2);
        printf("Z1 x Z2 = %d + %di\n",mul.real,mul.img);
        break;
    }

    return 0;
}

void display(struct complex z1,struct complex z2)
{
    printf("\nComplex Numbers are\n");
    printf("Z1 = %d + %di\n",z1.real,z1.img);
    printf("z2 = %d + %di\n",z2.real,z2.img);
}

struct complex addition(struct complex z1,struct complex z2)
{
    struct complex add;

    add.real = z1.real + z2.real;
    add.img = z1.img + z2.img;

    return add;
};

struct complex subtraction(struct complex z1,struct complex z2)
{
    struct complex sub;

    sub.real = z1.real - z2.real;
    sub.img = z1.img - z2.img;

    return sub;
};

struct complex multiplication( struct complex z1,struct complex z2)
{
    struct complex mul;

    mul.real = (z1.real * z2.real) - (z1.img * z2.img);
    mul.img = (z1.real * z2.img) + (z1.img * z2.real);

    return mul;

};
