/**
    Let us work on the menu of a library.
    Create a structure containing book information like accession number, name of author, book title and flag to know whether book is issued or not.
    Create a menu in which the following can be done.

    1 - Display book information.
    2 - Display all the books in the library of a particular author.
    3 - Display the number of books of a particular title.
    4 - Display the total number of books in the library.
    5 - Issue a book and Display its Remaining Book Left.
    6 - List the Books in the Order of Accession Number.
    7 - To Quit.
    (If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets increased by 1)
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct library
{
    char book_title[20];
    char author_name[20];
    int id;
    int flag;
}book[100];

void case1(struct library* ,int );
void case2(struct library* ,int );
void case3(struct library* ,int );
void case4(struct library* ,int );
void case5(struct library* ,int );
void case6(struct library* ,int );

int main()
{
    int n,i,choice;
    struct library *ptr=book;
    int count=0;

    printf("Enter Number of Books in Library : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nFor Book %d\n",i+1);

        printf("Enter Accession Number : ");
        scanf("%d",&(ptr+i)->id);

        printf("Enter Book title : ");
        scanf("%s",(ptr+i)->book_title);

        printf("Enter Book Author Name : ");
        scanf("%s",(ptr+i)->author_name);

        printf("Enter Number of Book Present in Library : ");
        scanf("%d",&(ptr+i)->flag);

        count+=(ptr+i)->flag;
    }

    abc:

    printf("\n*****************************************************************************************************************\n");

    printf("Press 1 to Display book information.\nPress 2 to Display all the books in the library of a particular author.\n");
    printf("Press 3 to Display the number of books of a particular title.\nPress 4 to Display the total number of books in the library.");
    printf("\nPress 5 to Issue a Book and display its remaining number of Books\nPress 6 to List the Books in the Order of Accession Number.\nPress 7 to Quit\n");

    printf("\nEnter Your Choice : ");
    scanf("%d",&choice);

    printf("\n*****************************************************************************************************************\n");

    switch(choice)
    {
    case 1:
        case1(ptr,n);
        goto abc;

    case 2:
        case2(ptr,n);
        goto abc;

    case 3:
        case3(ptr,n);
        goto abc;

    case 4:
        case4(ptr,count);
        goto abc;

    case 5:
        case5(ptr,n);
        goto abc;

    case 6:
        case6(ptr,n);
        goto abc;

    case 7:
        printf("Ending a Program");
        printf("\n*****************************************************************************************************************\n");
    }

    return 0;
}

void case1(struct library *ptr,int n)
{
    int i;

    printf("\nInformation of Books in Library are as Below\n\n");

    printf("ACCESSION No\tBOOK TITLE\tAUTHOR NAME\tTOTAL BOOKS\n");

    for(i=0;i<n;i++)
    {
        printf("%5d\t\t%5s\t\t%s\t\t %d\n",(ptr+i)->id,(ptr+i)->book_title,(ptr+i)->author_name,(ptr+i)->flag);
    }
}

void case2(struct library *ptr,int n)
{
    char author[20];

    printf("\nEnter Book Author Name to Display his or her Book : ");
    scanf("%s",author);

    printf("\nACCESSION No\tBOOK TITLE\tAUTHOR NAME\tTOTAL BOOKS\n");

    for(int i=0;i<n;i++)
    {
        if(strcmp((ptr+i)->author_name,author) == 0)
        {
            printf("%5d\t\t%5s\t\t%s\t\t %d\n",(ptr+i)->id,(ptr+i)->book_title,(ptr+i)->author_name,(ptr+i)->flag);
        }
    }
}

void case3(struct library *ptr,int n)
{
    char title[20];

    printf("\nEnter Book Title for Searching : ");
    scanf("%s",title);

    printf("\nACCESSION No\tBOOK TITLE\tAUTHOR NAME\tTOTAL BOOKS\n");

    for(int i=0;i<n;i++)
    {
        if(strcmp((ptr+i)->book_title,title) == 0)
        {
            printf("%5d\t\t%5s\t\t%s\t\t %d\n",(ptr+i)->id,(ptr+i)->book_title,(ptr+i)->author_name,(ptr+i)->flag);
        }
    }
}

void case4(struct library *ptr,int count)
{
    printf("\nTotal Number of Books in Library : %d\n",count);
}

void case5(struct library *ptr,int n)
{
    int issue,i,count,n_book,j;

    printf("\nEnter How many Book you want to issue [Maximum 4] : ");
    scanf("%d",&n_book);

    for(j=1;j<=n_book;j++)
    {
        printf("\nEnter Accession Number to Issue a Book : ");
        scanf("%d",&issue);

        for(i=0;i<n;i++)
        {
            if(issue == (ptr+i)->id)
            {
                count = --(ptr+i)->flag;
            }
        }

        printf("Remaining Book of %d Accession Number are %d\n",issue,count);
    }
}

void case6(struct library *ptr,int n)
{
    int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if((ptr+j)->id > (ptr+j+1)->id)
            {
                temp = (ptr+j)->id;
                (ptr+j)->id = (ptr+j+1)->id;
                (ptr+j+1)->id = temp;
            }
        }
    }

    printf("\nList of Book in the order of Accession Number are\n\n");
    printf("ACCESSION No\tBOOK TITLE\tAUTHOR NAME\tTOTAL BOOKS\n");

    for(i=0;i<n;i++)
    {
        printf("%5d\t\t%5s\t\t%s\t\t %d\n",(ptr+i)->id,(ptr+i)->book_title,(ptr+i)->author_name,(ptr+i)->flag);
    }
}
