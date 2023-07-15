#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    int i,len=0;

    printf("Enter the string : ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;

        else if(str[i]>='a' && str[i]<='z')
            str[i]-=32;

        else
        {
            if(str[i]==' ')
                continue;
            else
            {
                printf("Error");
                exit(0);
            }
        }
    }

    printf("\nstring is %s",str);

    for(i=0;str[i]!='\0';i++)
        len++;

    printf("\n\nLength of string is %d\n",len);
    return 0;
}
