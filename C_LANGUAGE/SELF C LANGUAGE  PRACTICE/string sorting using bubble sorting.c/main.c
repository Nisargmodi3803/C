#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char s[10][20],temp[20];
    int i,j,n;

    printf("Enter Size : ");
    scanf("%d",&n);

    printf("\nEnter String Element\n");

    for(i=0;i<n;i++)
        gets(s[i]);

    //sorting...

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmpi(s[i],s[j])>0)
            {
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }

    printf("\nAfter Sorting\n");

    for(i=0;i<n;i++)
        printf("%s\n",s[i]);

    return 0;
}
