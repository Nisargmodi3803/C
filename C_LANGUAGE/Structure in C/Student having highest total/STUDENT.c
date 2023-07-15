/** Generate a result table which consists of student ID,Marks of three  subject and total marks.
   write a program which takes input for ten students and displays result table.
   Also Display student information separately who got highest Total....*/

#include <stdio.h>
#include <stdlib.h>

struct detail
{
    char name[50];
    int id;
    int pps1;
    int maths;
    int bee;
    int total;

}stud[10];

int main()
{
    int i,n,max,pos=0;

    printf("Enter the Number of Student : ");
    scanf("%d",&n);

    printf("Enter the ID, Name and Marks of PPS1 MATHS & BEE of Student %d\n\n",n);

    for(i=0;i<n;i++)
    {
        printf("For Student %d\n",i+1);
        printf("ID : ");
        scanf("%d",&stud[i].id);
        printf("Name : ");
        scanf("%s",stud[i].name);
        printf("PPS1 Marks : ");
        scanf("%d",&stud[i].pps1);
        printf("Maths Marks : ");
        scanf("%d",&stud[i].maths);
        printf("BEE Marks : ");
        scanf("%d",&stud[i].bee);

        stud[i].total = stud[i].pps1 + stud[i].maths + stud[i].bee;
        printf("\n");
    }

    printf("\n Information of Students are given Below\n\n");

    printf("ID\tNAME\tPPS1\tMATHS\tBEE\tTOTAL\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\n",stud[i].id,stud[i].name,stud[i].pps1,stud[i].maths,stud[i].bee,stud[i].total);
    }

    max=stud[i].total;

    for(i=0;i<n;i++)
    {
        if(stud[i].total>max)
        {
            max=stud[i].total;
            pos=i;
        }
    }

    printf("\n\n Information of Students having Highest Marks are given Below\n\n");

    printf("ID\tNAME\tPPS1\tMATHS\tBEE\tTOTAL\n");


    printf("%d\t%s\t%d\t%d\t%d\t%d\n",stud[pos].id,stud[pos].name,stud[pos].pps1,stud[pos].maths,stud[pos].bee,stud[pos].total);




    return 0;
}
