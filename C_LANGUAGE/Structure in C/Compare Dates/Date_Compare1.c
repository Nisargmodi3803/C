/**  write a structure capable of storing date.
    write a function to compare those dates...*/

#include <stdio.h>
#include <stdlib.h>

struct dates
{
    int date;
    int month;
    int year;
}d1,d2;

void display(struct dates , struct dates);
int datecmp(struct dates ,struct dates );

int main()
{
    printf("For D1\n");
    printf("Enter Date : ");
    scanf("%d",&d1.date);
    printf("Enter Month : ");
    scanf("%d",&d1.month);
    printf("Enter Year : ");
    scanf("%d",&d1.year);

    printf("\nFor D2\n");
    printf("Enter Date : ");
    scanf("%d",&d2.date);
    printf("Enter Month : ");
    scanf("%d",&d2.month);
    printf("Enter Year : ");
    scanf("%d",&d2.year);

    display(d1,d2);

    printf("\ndatecmp function will return : %d\n",datecmp(d1,d2));
    //If it return 1 then D2 > D1....
    //If it return -1 then D1 > D2...
    //If it return 0 then D1 = D2....

    return 0;
}

void display(struct dates d1,struct dates d2)
{
    printf("\n%d/%d/%d\n",d1.date,d1.month,d1.year);
    printf("%d/%d/%d\n",d2.date,d2.month,d2.year);

}

int datecmp(struct dates d1,struct dates d2)
{
    if(d1.year>d2.year)
        return -1;
    if(d1.year<d2.year)
        return 1;

    if(d1.month>d2.month)
        return -1;
    if(d1.month<d2.month)
        return 1;

    if(d1.date>d2.date)
        return -1;
    if(d1.date<d2.date)
        return 1;

    return 0;
}
