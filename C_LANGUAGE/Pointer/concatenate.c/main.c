#include <stdio.h>
#include <stdlib.h>

char* strcat(char* , char*);

int main()
{
    char str1[20],str2[20];
    char *s1,*s2;

    printf("Enter the string 1 : ");
    gets(str1);

    printf("Enter the string 2 : ");
    gets(str2);

    s1=str1;
    s2=str2;

    strcat(s1,s2);

    printf("After Concatenate String is %s",*s1);

    return 0;
}

char* strcat(char *s1,char *s2)
{
    int i,j,len1,len2;

    for(i=0;*(s1+i)!='\0';i++)
        len1++;

    for(j=0;*(s2+j)!='\0';j++)
    {
        *(s1+i)=*(s2+j);
        i++;
    }

    *(s1+i)='\0';

}
