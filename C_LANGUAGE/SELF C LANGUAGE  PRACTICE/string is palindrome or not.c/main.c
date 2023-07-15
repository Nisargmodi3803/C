#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[20],s2[20];
    int l1,i,j,flag=0;

    printf("Enter the string: ");
    gets(s1);

    for(i=0;s1[i]!='\0';i++)
        l1++;

    for(i=l1,j=0;i>=0,j<l1;i--,j++)
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
        printf("\nEnter String is not Palindrome\n");

    else
        printf("\nEnter string is Palindrome\n");



    return 0;
}
