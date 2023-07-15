/**
    Create a structure named Date having day, month and year as its elements.
    Store the current date in the structure.
    Now add 45 days to the current date and display the final date.

*/

#include <stdio.h>
#include <stdlib.h>

struct day
{
    int date;
    int month;
    int year;
}d;

int main()
{
    int days,M,Y,P;

    printf("Enter Date,Month & Year respectively\n");
    scanf("%d %d %d",&d.date,&d.month,&d.year);

    printf("\n%d/%d/%d\n",d.date,d.month,d.year);

    printf("\nEnter Number of Days that you want to add in current date : ");
    scanf("%d",&days);

    Y = days/365;
    P = days%365;
    M = P/30;
    days = M%30;

    d.date+=days;
    d.month+=M;
    d.year+=Y;

    printf("\nNew Date : %d/%d/%d\n",d.date,d.month,d.year);

    return 0;
}
