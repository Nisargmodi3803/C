/**
    Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10).
    Store the information of the students.

    1 - Write a function to print the names of all the students having age 14.
    2 - Write another function to print the names of all the students having even roll no.
    3 - Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).
*/
#include <stdio.h>
#include <stdlib.h>

struct student
{
    char address[50];
    char name[20];
    int roll_no;
    int age;
}st[10];

void stud_age(struct student [] ,int );
void stud_even_rollno(struct student [],int );
void stud_rollno(struct student [],int );

int main()
{
    int i,n;

    printf("Enter Number of Students : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nFor Student %d\n",i+1);

        printf("Enter Name : ");
        scanf("%s",st[i].name);

        printf("Enter Roll No : ");
        scanf("%d",&st[i].roll_no);

        printf("Enter Age : ");
        scanf("%d",&st[i].age);

        printf("Enter Address : ");
        scanf("%s",st[i].address);
    }

    printf("\n*******************************************************************************************************\n");

    stud_age(st,n);

    printf("\n*******************************************************************************************************\n");

    stud_even_rollno(st,n);

    printf("\n*******************************************************************************************************\n");

    stud_rollno(st,n);

    printf("\n*******************************************************************************************************\n");

    return 0;
}

void stud_age(struct student st[],int n)
{
    int i;

    printf("\nStudent Having Age 14 are as below\n");

    for(i=0;i<n;i++)
    {
        if(st[i].age == 14)
        {
            printf("%s\n",st[i].name);
        }
    }
}

void stud_even_rollno(struct student st[],int n)
{
    int i;

    printf("\nStudent having Even Roll no are as below\n");

    for(i=0;i<n;i++)
    {
        if(st[i].roll_no % 2 == 0)
        {
            printf("%s\n",st[i].name);
        }
    }
}

void stud_rollno(struct student st[],int n)
{
    int i,roll_no;

    printf("\nEnter the Roll no of Student for searching Details : ");
    scanf("%d",&roll_no);

    for(i=0;i<n;i++)
    {
        if(st[i].roll_no == roll_no)
        {
            printf("\nRoll No.\tName\tAge\tAddress\n");
            printf("%5d\t\t%5s\t%5d\t%5s\n",st[i].roll_no,st[i].name,st[i].age,st[i].address);
        }
    }
}
