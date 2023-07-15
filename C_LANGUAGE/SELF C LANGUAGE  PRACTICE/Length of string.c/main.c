/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int i;
    char str[100];

    printf("Enter the string : ");
    scanf("%[^\n]s",str);

    i=strlen(str);

    printf("\nLength of string is %d",i);

    return 0;
}*/

/*#include<stdio.h>

int main()
{
    int count=0,i=0;
    char str[100];

    printf("Enter the string : ");
    scanf("%[^\n]s",str);

    while(str[i]!='\0')
    {
        count++;
        i++;
    }

    printf("\nLength of string is %d",count);
}*/


#include<stdio.h>

int main()
{
    int count=0,i;
    char str[100];

    printf("Enter the string : ");
    scanf("%[^\n]s",str);

    for(i=0;str[i]!='\0';i++)
        count++;

    printf("\nLength of string is %d",count);

    return 0;
}
