/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,flag=0;

    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
        printf("\n%d is not prime number\n",n);

    else
        printf("\n%d is prime number\n",n);

    return 0;
}*/


//USER DEFINED FUNCTION--->>

/*#include <stdio.h>
#include <stdlib.h>

void prime(int n);
int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    prime(n);

    return 0;
}

void prime(int n)
{
    int i,flag = 0;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag = 1;
            break;
        }
    }

    if(flag==1)
        printf("\n%d is not prime number\n",n);

    else
        printf("\n%d is prime number\n",n);

}*/


#include <stdio.h>
#include <stdlib.h>

void prime(int n);
int main()
{
    int n,flag=0;

    printf("Enter the number : ");
    scanf("%d",&n);

    prime(n);

    if(flag==1)
        printf("\n%d is not prime number\n",n);

    else
        printf("\n%d is prime number\n",n);


    return 0;
}

void prime(int n)
{
    int i,flag = 0;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag = 1;
            break;
        }
    }
    return flag;


}
