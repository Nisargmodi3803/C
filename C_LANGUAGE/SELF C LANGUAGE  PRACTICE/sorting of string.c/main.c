#include<stdio.h>
#include<string.h>

int main()
{
    char s[][20]={"Rahul,Virat,Rohit,Dhoni,Jadeja,Hardik,Ashwin,Bhuvi,Shami"},temp;
    int i,j,n=9;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if( strcmp(s[i],s[j])>0 )
            {
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }

    for(i=0;i<n;i++)
        puts(s[i]);
}
