#include <stdio.h>
#include <stdlib.h>

void modify(char[] , char[] );
int main()
{
    char s1[20],s2[20];

    printf("Enter the both strings \n");
    scanf("%s %s",s1,s2);

    modify(s1,s2);

    return 0;
}

void modify(char s1[],char s2[])
{
    int i,l=0;

    for(i=0;s1[i]!='\0';i++)
        l++;

    s2[1]='o';

    printf("Length of string1 is %d\n",l);

    printf("%s %s",s1,s2);
}
