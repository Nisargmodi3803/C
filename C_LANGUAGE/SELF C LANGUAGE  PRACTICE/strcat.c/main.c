#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[20],s2[20];
    int i,l1=0,l2=0;

    printf("Enter the string 1 : ");
    gets(s1);

    printf("Enter the string 2 : ");
    gets(s2);

    for(i=0;s1[i]!='\0';i++)
        l1++;

    for(i=0;s2[i]!='\0';i++)
        l2++;

    for(i=0;i<l2;i++)
    {
        s1[l1+i]=s2[i];
    }


    printf("String is %s",s1);

    return 0;
}
