/**
    Write a menu driven program to perform the following tasks using switch case.

    (i) Press 1 to read the marks of five subjects and three sessionals.
    (ii) Press 2 to print the marks.
    (iii) Press 3 to find the total marks in each sessionals.
    (iv) Press 4 to terminate the program.
*/

#include <stdio.h>
#include <stdlib.h>

struct sessionals
{
    int pps;
    int maths;
    int bee;
    int sw;
    int egd;
    int total;
    float per;
}s[3];

void case1(struct sessionals []);
void case2(struct sessionals []);
void case3(struct sessionals []);

int main()
{
    int n;

    abc:
    printf("Press 1 to read the marks of five subjects and three sessionals.\nPress 2 to print the marks.\nPress 3 for total marks in each sessionals.\nPress 4 to terminate the program.\n");
    printf("Your Choice is : ");
    scanf("%d",&n);
    printf("\n******************************************************************************************************************\n");

    switch(n)
    {
    case 1:
        case1(s);
        printf("\n******************************************************************************************************************\n\n");
        goto abc;
        break;

    case 2:
        case2(s);
        printf("\n******************************************************************************************************************\n\n");
        goto abc;
        break;

    case 3:
        case3(s);
        printf("\n******************************************************************************************************************\n\n");
        goto abc;
        break;

    case 4:
        printf("Quiting the Program\n");
        printf("******************************************************************************************************************\n");
        break;
    }

    return 0;
}

void case1(struct sessionals s[])
{
    printf("\nEnter Your Marks out of 36\n");

    for(int i=0;i<3;i++)
    {
        printf("\nFor Sessional %d\n",i+1);

        printf("PPS1 : ");
        scanf("%d",&s[i].pps);

        printf("Maths : ");
        scanf("%d",&s[i].maths);

        printf("BEE : ");
        scanf("%d",&s[i].bee);

        printf("SW : ");
        scanf("%d",&s[i].sw);

        printf("EGD : ");
        scanf("%d",&s[i].egd);
    }
}

void case2(struct sessionals s[])
{
    printf("\nYour Marks of Five Subjects of Three Sessionals are\n\n");
    printf("Sessionals\t  PPS1\t  MATHS\t  BEE\t  SW\t  EGD\n");

    for(int i=0;i<3;i++)
    {
        printf("%5d\t\t%5d\t %5d\t %5d\t%5d\t%5d\n",i+1,s[i].pps,s[i].maths,s[i].bee,s[i].sw,s[i].egd);
    }
}

void case3(struct sessionals s[])
{
    printf("\nHere Total Marks in each sessionals is out of 180\n\n");

    printf("Sessionals\t  PPS1\t  MATHS\t  BEE\t  SW\t  EGD\t TOTAL\t PERCENTAGE\n");

    for(int i=0;i<3;i++)
    {
        s[i].total = s[i].pps + s[i].maths + s[i].bee + s[i].sw + s[i].egd;
        s[i].per = (float) s[i].total*100/180;

        printf("%5d\t\t%5d\t %5d\t %5d\t%5d\t%5d\t%5d\t %0.5f\n",i+1,s[i].pps,s[i].maths,s[i].bee,s[i].sw,s[i].egd,s[i].total,s[i].per);

    }
}
