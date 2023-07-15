/*
#include<stdio.h>

void Encrypt(char*);

int main()
{

    char str[100];

    printf("Enter the Script for Encrypt : ");
    gets(str);

    Encrypt(str);

    printf("%s",str);

    return 0;
}

void Encrypt(char *str)
{
    char *ptr=str;

    while(*ptr != '\0')
    {
        *ptr = *ptr + 3;
        ptr++;
    }
}
*/




#include<stdio.h>

void Decrypt(char*);

int main()
{

    char str[100];

    printf("Enter the Script for Decrypt : ");
    gets(str);

    Decrypt(str);

    printf("%s",str);

    return 0;
}

void Decrypt(char *str)
{
    char *ptr=str;

    while(*ptr != '\0')
    {
        *ptr = *ptr - 3;
        ptr++;
    }
}

