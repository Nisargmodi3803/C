#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void area(int a);

int main()
{
    int a;

    printf("Enter the Length of Square : ");
    scanf("%d",&a);

    area(a);

    return 0;
}

void area(int a)
{

    printf("\nArea of Square Having Side of Length %d is %d\n",a,(int)pow(a,2));  //Because pow function Return only double......

}
