/**
    Write a program to compare two dates entered by user.
    Make a structure named Date to store the elements day, month and year to store the dates.
    If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".
*/

#include <stdio.h>
#include <stdlib.h>

struct day
{
    int date;
    int month;
    int year;
}d1,d2;

int main()
{
    int flag=0;

    printf("For Day 1\n");

    printf("Enter Date : ");
    scanf("%d",&d1.date);

    printf("Enter Month : ");
    scanf("%d",&d1.month);

    printf("Enter Year : ");
    scanf("%d",&d1.year);


    printf("\nFor Day 2\n");

    printf("Enter Date : ");
    scanf("%d",&d2.date);

    printf("Enter Month : ");
    scanf("%d",&d2.month);

    printf("Enter Year : ");
    scanf("%d",&d2.year);

    printf("\n%d/%d/%d\n%d/%d/%d\n\n",d1.date,d1.month,d1.year,d2.date,d2.month,d2.year);

    if(d1.year == d2.year)
    {
        if(d1.month == d2.month)
        {
            if(d1.date == d2.date)
            {
                flag=1;
            }
        }

    }

    if(flag==1)
        printf("Both Dates are Equal\n");

    else
        printf("Both Dates are not Equal\n");

    return 0;
}
