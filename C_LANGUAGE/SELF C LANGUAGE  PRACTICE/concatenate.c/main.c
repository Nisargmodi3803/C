/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];

    printf("Enter the string : ");
    scanf("%s",str1);

    printf("Enter the string : ");
    scanf("%s",str2);

    //strcat(str1,str2);

    strncat(str1,str2,4);


    printf("/n%s",str1);
    return 0;
}*/


#include <stdio.h>
#include <stdlib.h>>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int len1,len2,i;

    printf("Enter the string : ");
    scanf("%s",str1);

    printf("Enter the string : ");
    scanf("%s",str2);

    len1=strlen(str1);
    len2=strlen(str2);

    for(i=0;i<=len2;i++)
    {
        str1[len1+i]=str2[i];
    }

    printf("\n%s",str1);

    return 0;
}
