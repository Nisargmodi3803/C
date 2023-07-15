/**
    Write a structure to store the name, account number and balance of customers (more than 10).
    store their information.

    1 - Write a function to print the names of all the customers having balance less than $200.
    2 - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and
        then print the incremented value of their balance.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct bank
{
    char name[20];
    int account_no;
    int balance;
}bank;
bank acc[20];

void bal_less(bank [],int );
void bal_inc(bank [],int );

int main()
{
    int n,i;

    printf("Enter Number of Customers in Bank : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nFor Customer %d\n",i+1);

        printf("Enter Name : ");
        scanf("%s",acc[i].name);

        printf("Enter Account Number : ");
        scanf("%d",&acc[i].account_no);

        printf("Enter Account Balance in US Dollor : ");
        scanf("%d",&acc[i].balance);
    }

    printf("\n**************************************************************************************************************\n");

    bal_less(acc,n);

    printf("\n**************************************************************************************************************\n");

    bal_inc(acc,n);

    printf("\n**************************************************************************************************************\n");

    return 0;
}

void bal_less(bank acc[],int n)
{
    int i;

    printf("Customers Having Balance Less then $200\n");
    for(i=0;i<n;i++)
    {
        if(acc[i].balance < 200)
        {
            printf("%s\n",acc[i].name);
        }
    }
}

void bal_inc(bank acc[],int n)
{
    int i;

    printf("Customers having Balance more then $1000 then Add $100 to his/her Account\n");

    printf("\nName\t\tAccount No\tBalance\n");
    for(i=0;i<n;i++)
    {
        if(acc[i].balance > 1000)
        {
            acc[i].balance+=100;
            printf("%5s\t\t%d\t\t%5d\n",acc[i].name,acc[i].account_no,acc[i].balance);
        }
    }
}
