/** Create a structure containing information of product viz, id ,name, price etc.
   Implement search function on basis of id of product and display its respective name and price...*/

#include <stdio.h>
#include <stdlib.h>

struct product_details
{
    char name[30];
    int id;
    int price;
    float rating;
}prod[10];

void search();

int main()
{


    int n,i,s;

    printf("Enter the number of products : ");
    scanf("%d",&n);

    printf("\nEnter the ID,Name,Price and Rating of %d product\n\n",n);

    for(i=0;i<n;i++)
    {
        printf("For product-%d\n",i+1);

        printf("ID : ");
        scanf("%d",&prod[i].id);

        printf("NAME : ");
        scanf("%s",prod[i].name);

        printf("PRICE : ");
        scanf("%d",&prod[i].price);

        printf("RATING : ");
        scanf("%f",&prod[i].rating);

        printf("\n");
    }

    printf("\nEnter the Product ID to be Searched : ");
    scanf("%d",&s);

    search(n,s);

    return 0;
}

void search(int n,int s)
{
    int i,flag=0;

    for(i=0;i<n;i++)
    {
        if(prod[i].id==s)
        {
            flag = 1;

            printf("\nID\tNAME\tPRICE\tRATING\n");
            printf("%d\t%s\t%d\t%f\n",prod[i].id,prod[i].name,prod[i].price,prod[i].rating);

        }
    }

    if(flag==0)
    {
       printf("\nProduct not Found");
    }



}
