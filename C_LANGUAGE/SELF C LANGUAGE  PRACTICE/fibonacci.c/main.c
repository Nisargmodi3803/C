/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a=0,b=1,n,c;

    printf("Enter the number till that you want fibonacci series : ");
    scanf("%d",&n);

    printf("%d\t",a);
    printf("%d\t",b);

    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }

    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a=0,b=1,n,c;

    printf("Enter the number till that you want fibonacci series : ");
    scanf("%d",&n);

    printf("%d\t ",a);
    printf("%d\t ",b);

    i=3;
    while(i<n)
    {
        c=a+b;
        printf("%d\t ",c);
        b=c;
        a=b;
        i++;
    }

    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3,a=0,b=1,n,c;

    printf("Enter the number till that you want fibonacci series : ");
    scanf("%d",&n);

    printf("%d\t",a);
    printf("%d\t",b);

    do
    {
        c=a+b;
        printf("%d\t ",c);
        b=c;
        a=b;
        i++;
    }
    while(i<n);



    return 0;
}

