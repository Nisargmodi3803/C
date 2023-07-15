
#include <stdio.h>
#include <stdlib.h>

void reverse(char[]);

int main()
{
    char s1[20];

    printf("Enter the string : ");
    gets(s1);

    reverse(s1);

    return 0;
}

void reverse(char s1[])
{
    char s2[20];
    int i,j,l=0;

    for(i=0;s1[i]!='\0';i++)
        l++;

    for(i=l,j=0;i>=0,j<l;i--,j++)
        s2[j]=s1[i-1];

    printf("\nReverse of String is %s\n",s2);
}


