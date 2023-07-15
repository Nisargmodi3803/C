/* Structure Within Structure [Nesting of Structure]
    Write a program to print student name ,id, collage name and department name,
    using structure within structure   */

#include<stdio.h>

struct student
{
    char name[20];
    char id[20];

    struct college
    {
        char c_name[20];

        struct department
        {
            char d_name[20];

            struct HOD
            {
                char HOD_name[20];

            }h_detail;

        }d_detail;

    }c_detail;

}stud[10];

int main()
{
    int i,n;

    printf("Enter Number of Student : ");
    scanf("%d",&n);

    printf("\nEnter Student name , college name ,department name & Head of dep. name\n");

    for(i=0;i<n;i++)
    {
        printf("For Student-%d\n",i+1);

        printf("Student ID : ");
        scanf("%s",stud[i].id);

        printf("Student Name : ");
        scanf("%s",stud[i].name);

        printf("College Name : ");
        scanf("%s",stud[i].c_detail.c_name);

        printf("Department Name : ");
        scanf("%s",stud[i].c_detail.d_detail.d_name);

        printf("Head of Dep. Name : ");
        scanf("%s",stud[i].c_detail.d_detail.h_detail.HOD_name);

        printf("\n");
    }

    printf("\nDetails of Students with college, department and Head of Dep. \n\n");

    printf("ID\tNAME\t\tCOLLEGE\t\tDEPARTMENT\tHOD\n");

    for(i=0;i<n;i++)
        printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n",stud[i].id,stud[i].name,stud[i].c_detail.c_name,stud[i].c_detail.d_detail.d_name,stud[i].c_detail.d_detail.h_detail.HOD_name);
}


