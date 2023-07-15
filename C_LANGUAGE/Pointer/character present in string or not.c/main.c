
#include <stdio.h>
#include <stdlib.h>

void char_present(char*,char);

int main()
{
    char str[20],c;

    printf("Enter String : ");
    gets(str);

    printf("Enter the Character : ");
    scanf("%c",&c);

    char_present(str,c);

    return 0;
}

void char_present(char *str,char c)
{
    char *ptr=str;
    int flag=0;

    while(*ptr!='\0')
    {
        if(*ptr==c)
        {
            flag=1;
        }
        ptr++;
    }

    if(flag==1)
        printf("\n%c present in given string\n",c);

    else
        printf("\n%c is not present in given string\n",c)

}

