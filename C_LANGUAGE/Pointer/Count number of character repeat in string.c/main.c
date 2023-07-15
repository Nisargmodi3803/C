#include <stdio.h>
#include <stdlib.h>

int repeat(char*,char);

int main()
{
    char str[20],c,count;

    printf("Enter String : ");
    gets(str);

    printf("Enter the Character : ");
    scanf("%c",&c);

    count=repeat(str,c);

    printf("\n%c repeats %d times\n",c,count);

    return 0;
}

int repeat(char *str,char c)
{
    int count=0,i;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==c)
        {
            count++;
        }
    }

    return count;

}
