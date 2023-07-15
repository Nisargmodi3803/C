#include <stdio.h>
#include <stdlib.h>

struct products
{
    int p_id;
    char p_name[100];
    float price;
    char desc[100];
    int quan;
    float rating;
}prod[20];

void search(int a,int n);
int main()
{
    int n,i,a;

    printf("Enter the number of products you want to enter : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nDetails of Products-%d\n",i+1);

        printf("Enter the product ID : ");
        scanf("%d",&prod[i].p_id);

        printf("Enter the product Name : ");
        scanf("%s",prod[i].p_name);

        printf("Enter the product Price: ");
        scanf("%f",&prod[i].price);

        printf("Enter the product Despriction : ");
        scanf("%s",prod[i].desc);

        printf("Enter the product Quantity : ");
        scanf("%d",&prod[i].quan);

        printf("Enter the product Rating : ");
        scanf("%f",&prod[i].rating);
    }

    printf("\nEnter the product ID that you want to search : ");
    scanf("%d",&a);

    search(a,n);

    return 0;
}

void search(int a,int n)
{
    int i,flag=0;

    printf("\n\n Product Details of product that you have search : \n");

    for(i=0;i<n;i++)
    {
        if(prod[i].p_id == a)
        {
            flag = 1;
            printf("%d\t%s\t%f\t%s\t%d\t%f\n",prod[i].p_id,prod[i].p_name,prod[i].price,prod[i].desc,prod[i].quan,prod[i].rating);
        }
    }
    if(flag == 0)
        printf("\nItem not found");
}
