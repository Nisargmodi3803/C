#include<stdio.h>

char* search(char [],char );

int main()
{
    char str[20],n;

    printf("Enter the String : ");
    gets(str);

    printf("\nEnter a character to be find in given string : ");
    scanf("%c",&n);

    search(str,n);

    return 0;
}

char* search(char str[],char n)
{
    int i,flag=0,pos=0;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==n)
        {
            flag=1;
            pos=i;
            printf("\nPosition of character %c in string is %d",n,pos+1);
        }
    }

    if(flag==0)
        printf("\nCharacter not found\n");


}
