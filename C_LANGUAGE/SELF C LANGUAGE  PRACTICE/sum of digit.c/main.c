/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a,sum=0;

    printf("Enter the number : ");
    scanf("%d",&n);

    while(n)
    {
        a=n%10;
        sum+=a;
        n=n/10;
        i++;
    }

    printf("Sum of digit is %d",sum);
    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a,sum=0;

    printf("Enter the number : ");
    scanf("%d",&n);

    do
    {
        a=n%10;
        sum+=a;
        n=n/10;
    }
    while(n);

    printf("Sum of digit is %d",sum);
    return 0;
}


