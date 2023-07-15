/**

Create a structure named student having union named result inside it with other necessary details.
Here, result is a union having marks of JEE or NEET.
Design following User Defined function(s) for given scenario:


a)        User Defined Function named GetStudentInfo to store the user inputs inside structure variable.
b)        User defined function to print the details of students who got the highest marks in JEE exam.
c)        User defined function to print which exam had higher number of student enrolled along with its count.

*/

#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    char name[20];
    int id;
    int flag;

    union result
    {
        int jee;
        int neet;
    }marks;
}student;
student stud[20];

void getstudentinfo(student [],int );

//void display(student [],int );

void maxjee(student [],int );

void count_exam(student [],int );

int main()
{
    int n;


    printf("Enter Number of student : ");
    scanf("%d",&n);
    printf("\n");

    getstudentinfo(stud,n);

    return 0;
}

void getstudentinfo(student stud[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("For Student-%d\n",i+1);

        printf("Enter Name : ");
        scanf("%s",stud[i].name);

        printf("Enter ID : ");
        scanf("%d",&stud[i].id);

        printf("Press 0 for JEE Exam or Press 1 for NEET Exam\n");
        scanf("%d",&stud[i].flag);

        if(stud[i].flag==0)
        {
            printf("Enter JEE Marks : ");
            scanf("%d",&stud[i].marks.jee);
        }

        if(stud[i].flag==1)
        {
            printf("Enter NEET Marks : ");
            scanf("%d",&stud[i].marks.neet);
        }

        printf("\n");
    }

    printf("****************************************************************************************************\n");

    //display(stud,n);
    maxjee(stud,n);
    count_exam(stud,n);
}

/*
void display(student stud[],int n)
{
    printf("\n\nID\tName\tMarks\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t%5s\t%d\n\",stud[i].id,stud[i].name,stud[i].marks);
    }
    printf("\n");
}
*/

void maxjee(student stud[],int n)
{
    int i,max_pos,max=0;

    for(i=0;i<n;i++)
    {
        if(stud[i].flag==0)
        {

            if(stud[i].marks.jee>max)
            {
                max=stud[i].marks.jee;
                max_pos=i;
            }
        }
    }


    printf("\nStudent Who got Maximum marks in JEE Exam\n");
    printf("\nID\tName\tJEE Marks\n");
    printf("%d\t%5s\t%d\n\n",stud[max_pos].id,stud[max_pos].name,stud[max_pos].marks.jee);
    printf("****************************************************************************************************\n");

}

void count_exam(student stud[],int n)
{
    int jee_count=0,neet_count=0,i,count;

    for(i=0;i<n;i++)
    {
        if(stud[i].flag==0)
        {
            jee_count++;
        }

        if(stud[i].flag==1)
        {
            neet_count++;
        }
    }

    if(jee_count>neet_count)
    {
        printf("\n\nHighest Number of student appear in JEE Exam\n");
        printf("Number of Student in JEE Exam : %d\n\n",jee_count);
    }

    else if(neet_count>jee_count)
    {
        printf("\n\nHighest Number of student appear in NEET Exam\n");
        printf("Number of Student in NEET Exam : %d\n\n",neet_count);
    }

    else
    {
        printf("\n\nEqual number of student appear in JEE and NEET both exam\n");
        printf("Number of Student in JEE Exam : %d\n",jee_count);
        printf("Number of Student in NEET Exam : %d\n\n",neet_count);
    }

    printf("****************************************************************************************************\n");
}
