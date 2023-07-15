/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int value=0;

    printf("Enter the string 1 : ");
    scanf("%s",str1);

    printf("Enter the string 2 : ");
    scanf("%s",str2);

    value = strcmp(str1,str2);

    if(value==0)
        printf("\nBoth the string are same\n");
    else
        printf("\nBoth the string are not same\n");

    printf("\n%d",value);

    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int value=0;

    printf("Enter the string 1 : ");
    scanf("%s",str1);

    printf("Enter the string 2 : ");
    scanf("%s",str2);

   // value=strncmp(str1,str2,4);
    //printf("\n%d",value);

   if(strcmp(str1,str2)==0)
        printf("\nBoth the string are same\n");
    else
        printf("\nBoth the string are not same\n");

    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[100],str2[100];
    int flag=0,i;

    printf("Enter the string 1 : ");
    scanf("%s",str1);

    printf("Enter the string 2 : ");
    scanf("%s",str2);

    for(i=0;str1[i]!='\0' || str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
    }
        if(flag==1)
            printf("\nBoth the strings are not same\n");
        else
            printf("\nBoth the string are same\n");

    return 0;
}



