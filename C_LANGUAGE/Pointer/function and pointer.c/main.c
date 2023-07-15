/**
    WAP using function and pointer which copies last n characters of String 1 at the end
    of String 2. Also convert lower-case letter to upper-case and upper-case letter to lower-case letter
    while copying.

    Hint:

    Input: -
    String 1: DdufoT
    String 2: Hello
    n=3

    output: -
    HelloFOt

*/

#include <stdio.h>
#include <stdlib.h>

void change_case(char*);
char strcat(char* ,char* );

int main()
{
    char str1[10],str2[10];
    char *m,*n;

    printf("Enter String 1 : ");
    gets(str1);

    printf("Enter String 2 : ");
    gets(str2);

    *m=str1;
    *n=str2;
    change_case(m);

    printf("%s",*m);

    return 0;
}

void change_case(char *m)
{
    int i;

    for(i=0;*(m+i)!='\0';i++)
    {
        if(*(m+i)>'A' && *(m+i)<'Z')
        {
            *(m+i)+=32;
        }

        else if(*(m+i)>'a' && *(m+i)<'z')
        {
            *(m+i)-=32;
        }

        else
        {
            if(*(m+i) == ' ')
            {
                continue;
            }
        }
    }
}
