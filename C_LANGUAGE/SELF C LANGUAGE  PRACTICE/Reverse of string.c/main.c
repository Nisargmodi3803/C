/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[100];

    printf("Enter the string : ");
    scanf("%[^\n]s",str);

    strrev(str);

    printf("\nReverse of string is %s",str);

    return 0;
}*/

/*#include<stdio.h>
#include<string.h>

int main()
{
    int l,i;
    char str[100],temp;

    printf("Enter the string : ");
    scanf("%[^\n]s",str);

    l=strlen(str);

    for(i=0;i<l/2;i++)
    {
        temp=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=temp;
    }

    printf("\nReverse of string is %s\n",str);

    return 0;
}*/

#include<stdio.h>
#include<string.h>

int main()
{
    int l,i,j;
    char str[100],temp;

    printf("Enter the string : ");
    scanf("%[^\n]s",str);

    l=strlen(str);

    for(i=0,j=l-1;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("\nReverse of string is %s\n",str);

    return 0;
}
