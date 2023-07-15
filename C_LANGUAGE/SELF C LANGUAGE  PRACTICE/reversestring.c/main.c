#include <stdio.h>
#include <stdlib.h>

int main()
{

    char s1[20],s2[20];
    int i,j,l1=0;

    printf("Enter the string : ");
    gets(s1);

    for(i=0;s1[i]!='\0';i++)
        l1++;

    for(i=l1,j=0;i>=0,j<l1;i--,j++)
    {
        s2[j]=s1[i-1];
    }

    printf("\nstring is %s\n",s2);

    return 0;
}
