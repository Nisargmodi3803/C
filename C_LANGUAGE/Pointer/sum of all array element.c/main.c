/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6]={1,2,3,4,5,6},i,sum=0;

    int *p=a;

    printf("Element\tvalue\tAddress\n\n");

    for(i=0;i<6;i++)
    {
        printf("a[%d]\t%d\t%u\n",i,*p,p);
        sum+=*p;
        p++;
    }
    printf("\nSum=%d\n",sum);
    printf("\nAddress=%d\n",&sum);

    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6]={1,2,3,4,5,6},i,sum=0;

    int *p=a;

    printf("Element\tvalue\tAddress\n\n");

    for(i=0;i<6;i++)
    {
        printf("a[%d]\t%d\t%u\n",i,*(p+i),p);
        sum+=*(p+i);
    }

    printf("\nSum=%d\n",sum);

    return 0;
}

