/**
    Create a structure to specify data of customers in a bank. The data to be stored are:
    Account number, name, and balance. Assume maximum of 100 customers in the bank.

    1) Write a function named Inquiry to print the account no and name of each customer whose
    balance is less than 1000 Rs.

    2) Write a function named Withdrawal to withdraw valid amount from the account. If the amount
    is not valid for withdrawal, it should display appropriate error message. If the amount is valid
    then deduct the amount from the current balance.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Bank_account
{
    long account_no;
    char name[50];
    float balance;

}account;
account customers[100];

void inquiry(account[],int );

void withdrawal(account[],int );

int main()
{
    int i,n;

    printf("Enter Number of Customers : ");
    scanf("%d",&n);

    printf("\nEnter Information of Customers\n\n");

    for(i=0;i<n;i++)
    {
        printf("For Customer-%d\n",i+1);

        printf("Enter Account Number : ");
        scanf("%ld",&customers[i].account_no);

        printf("Enter Account Holder Name : ");
        scanf("%s",customers[i].name);

        printf("Enter your Balance : ");
        scanf("%f",&customers[i].balance);

        printf("\n");
    }

    printf("\n*****************************************************************************************************************\n");

    inquiry(customers,n);

    withdrawal(customers,n);


    return 0;
}

void inquiry(account customers[],int n)
{
    int i;

    printf("\nPerson Having Account Balance less than 1000 are given below\n");
    printf("\nAccount No.\tHolder Name\tBalance\n");

    for(i=0;i<n;i++)
    {
        if(customers[i].balance<=1000)
        {
            printf("%ld\t\t%5s\t\t%f\n",customers[i].account_no,customers[i].name,customers[i].balance);
        }
    }
    printf("\n\n*****************************************************************************************************************\n\n");
}

void withdrawal(account customers[],int n)
{
    int i;
    float withdrawal_amount;
    long acc_no;

    printf("Enter your Account Number for Withdrawal : ");
    scanf("%ld",&acc_no);

    printf("Enter Amount for Withdrawal : ");
    scanf("%f",&withdrawal_amount);

    for(i=0;i<n;i++)
    {
        if(acc_no==customers[i].account_no)
        {
            if(withdrawal_amount < customers[i].balance)
            {
                printf("\n**************");
                printf("\nProcessing\n");
                printf("**************");
                printf("\nTake Your Cash\n");
                printf("**************");
                printf("\nNow Your Main Balance is %f\n",customers[i].balance - withdrawal_amount);
                printf("**************");
                printf("\nThank for Visit\n");
            }

            else
            {
                printf("\nERROR!!! Your Main Balance is Less then Your Withdrawal Amount\n");
                printf("**************");
                printf("\nThank for Visit\n");
            }
        }

    }

    printf("\n*****************************************************************************************************************\n\n");

}
