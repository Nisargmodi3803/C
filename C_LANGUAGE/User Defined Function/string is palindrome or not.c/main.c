/*
//with arugument & without Return statement......
#include <stdio.h>
#include <stdlib.h>

void palindrome(char[]);
int main()
{
    char s1[20];

    printf("Enter the string : ");
    gets(s1);

    palindrome(s1);

    return 0;
}

void palindrome(char s1[])
{
    char s2[20];
    int i,j,l=0,flag=0;

    for(i=0;s1[i]!='\0';i++)
        l++;

    for(i=l,j=0;i>=l,j<l;i--,j++)
    {
        s2[j]=s1[i-1];
    }

    for(i=0;s1[i]!='\0' && s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
        printf("\nEnter string is not Palindrome\n");

    else
        printf("\nEnter String is Palindrome\n");
}*/


//With Arugument and With Return Statement....
#include <stdio.h>
#include <stdlib.h>

int palindrome(char[]);
int main()
{
    char s1[20];
    int pal;

    printf("Enter the string : ");
    gets(s1);

    pal=palindrome(s1);

    if(pal==1)
        printf("\nEnter string is not Palindrome\n");

    else
        printf("\nEnter String is Palindrome\n");

    return 0;
}

int palindrome(char s1[])
{
    char s2[20];
    int i,j,l=0,flag=0;

    for(i=0;s1[i]!='\0';i++)
        l++;

    for(i=l,j=0;i>=l,j<l;i--,j++)
    {
        s2[j]=s1[i-1];
    }

    for(i=0;s1[i]!='\0' && s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }
    }

    return flag;
}

