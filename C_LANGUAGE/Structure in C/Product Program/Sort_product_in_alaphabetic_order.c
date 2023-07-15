/*  Create a structure containing information of product viz, id ,name, price etc.
   Implement sort function which will sort product details in Alphabetic order....*/

#include<stdio.h>
#include<string.h>

struct product_details
{
    char name[20];
    int id;
    int price;

}prod[10];

void sort(struct product_details prod[10] ,int n);
void display(struct product_details prod[10],int n);

int main()
{
    int n,i;

    printf("Enter Size : ");
    scanf("%d",&n);

    printf("\nEnter Product ID, Name, Price and Rating\n");

    for(i=0;i<n;i++)
    {
        printf("\nFor Product-%d\n",i+1);

        printf("ID : ");
        scanf("%d",&prod[i].id);

        printf("Name : ");
        scanf("%s",prod[i].name);

        printf("Price : ");
        scanf("%d",&prod[i].price);

        printf("\n");
    }

    sort(prod,n);
    display(prod,n);

    return 0;
}

void sort(struct product_details prod[10],int n)
{
    struct product_details temp;
    int i,j;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(prod[i].name,prod[j].name)>0)
            {
                temp=prod[i];
                prod[i]=prod[j];
                prod[j]=temp;
            }
        }
    }

}


void display(struct product_details prod[10],int n)
{
    printf("\nLists of Products\n\n");

    printf("ID\tNAME\t\tPRICE\n");

    for(int i=0;i<n;i++)
    {
        printf("%d\t%-10s\t%d\n",prod[i].id,prod[i].name,prod[i].price);
    }

}
