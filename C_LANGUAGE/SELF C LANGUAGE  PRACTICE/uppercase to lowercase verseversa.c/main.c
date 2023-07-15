/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[100];

    printf("Enter the string : ");
    scanf("%[^\n]s",str);

   // strupr(str);
    strlwr(str);

    printf("\n%s\n",str);
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i;

    printf("Enter the string : ");
    scanf("%[^\n]s",str);

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
                printf("ERROR");
                exit(0);
       }
   }


    printf("\n%s\n",str);
    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main()
{
    char str[100];
    int i;

    printf("Enter the string : ");
    scanf("%[^\n]s",str);

    for(i=0;str[i]!='\0';i++)
    {
        if(isupper(str[i]))
            str[i]=tolower(str[i]);

        else if(islower(str[i]))
            str[i]=toupper(str[i]);

        else
        {
            if(str[i]==' ')
                continue;
            else
                printf("ERROR");
                exit(0);
        }

    }

    printf("\n%s\n",str);
    return 0;
}
