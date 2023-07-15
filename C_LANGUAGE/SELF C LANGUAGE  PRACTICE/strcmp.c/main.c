#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,flag=0;
    char str1[10],str2[10];

    printf("Enter the string 1 : ");
    gets(str1);

    printf("Enter the string 2 : ");
    gets(str2);

    for(i=0;str1[i]!='\0' || str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
        printf("\nGiven strings are not same\n");

    else
        printf("\nGiven strings are same\n");


    return 0;
}
