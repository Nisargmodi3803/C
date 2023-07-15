/**
    Write a C program to read the string form the user that splits the entered string into two
    strings. No. of characters in each string is equal to the half the no. of characters of the
    original/ entered string.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[20],str2[20],str3[20];
    int i,len=0;

    printf("Enter the String : ");
    gets(str1);

    for(i=0;str1[i]!='\0';i++)
        len++;

    for(i=0;i<len/2;i++)
    {
        str2[i] = str1[i];
        str3[i] = str1[len/2 + i];
    }

    for(i=0;i<=len/2;i++)
    {
        str3[i] = str1[len/2 + i];
    }

    printf("\n%s",str2);
    printf("\n%s",str3);

    return 0;
}
