/* Create a structure containing information of product viz, id ,name, price etc.
   Implement sort function which will sort product details in Product ID order....*/

#include<stdio.h>

struct product_details
{
    char name[20];
    int id;
    int price;
}prod[10];

void sort(struct product_details prod[10], int n);
void display(struct product_details prod[10],int n);

int main()
{
    int n,i;

    printf("Enter the number of products : ");
    scanf("%d",&n);

    printf("\nEnter the product ID ,Name and price\n");

    for(i=0;i<n;i++)
    {
        printf("For Product-%d\n",i+1);

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

}

void sort(struct product_details prod[10], int n)
{
    int i,j;
    struct product_details temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(prod[j].id>prod[j+1].id)
            {
                temp=prod[j];
                prod[j]=prod[j+1];
                prod[j+1]=temp;
            }
        }
    }


}

void display(struct product_details prod[10],int n)
{
     printf("\nList of products\n");
    printf("ID\tNAME\t\tPRICE\n");

    for(int i=0;i<n;i++)
        printf("%d\t%-10s\t%d\n",prod[i].id,prod[i].name,prod[i].price);
}
