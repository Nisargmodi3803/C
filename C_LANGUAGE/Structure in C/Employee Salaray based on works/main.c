/**
    Write a structure to store the names, salary and hours of work per day of 10 employees in a company.
    Write a program to increase the salary depending on the number of hours of work per day as follows and
    then print the name of all the employees along with their final salaries.

    Hours of work per day	8	 10	    >=12
    Increase in salary	  $50	$100	$150
*/

#include <stdio.h>
#include <stdlib.h>

struct company
{
    char name[20];
    int salary;
    int hour;   ///Hour of work per day.....
}emp[10];

void inc_salary(struct company* ,int );

int main()
{
    int n,i;
    struct company *ptr = emp;

    printf("Enter number of Employee : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nFor Employee %d\n",i+1);

        printf("Enter Name : ");
        scanf("%s",(ptr+i)->name);

        printf("Enter Hours of work per day : ");
        scanf("%d",&(ptr+i)->hour);

        printf("Enter Current Salary in US Dollar : ");
        scanf("%d",&(ptr+i)->salary);
    }

    inc_salary(ptr,n);

    printf("\n\nIncreament Salary According to Work for hour are as follow\n\n");

    printf("NAME\t\tSALARY\n");

    for(i=0;i<n;i++)
    {
        printf("%5s\t\t%d\n",(ptr+i)->name,(ptr+i)->salary);
    }

    return 0;
}

void inc_salary(struct company *ptr,int n)
{
    for(int i=0;i<n;i++)
    {
        if((ptr+i)->hour == 8)
        {
            (ptr+i)->salary+=50;
        }

        else if((ptr+i)->hour == 10)
        {
            (ptr+i)->salary+=100;
        }

        else if((ptr+i)->hour >=12)
        {
            (ptr+i)->salary = (ptr +i)->salary + 150;
        }
    }
}
