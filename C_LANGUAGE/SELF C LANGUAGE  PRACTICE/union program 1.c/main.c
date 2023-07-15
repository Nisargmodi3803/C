/* Read and Display the member of union (Take book details ISBN no. , Title, price)*/

#include <stdio.h>
#include <stdlib.h>

union book_details
{
    int isbn;
    char name[30];
    int price;
}book;

int main()
{
    int a,c;
    char b;

    printf("Enter Book ISBN no. : ");
    scanf("%d",&book.isbn);
    printf("ISBN no. : %d\n",book.isbn);

    printf("Enter Book Name : ");
    scanf("%s",book.name);
    printf("Name : %s\n",book.name);

    printf("Enter Book Price : ");
    scanf("%d",&book.price);
    printf("Price : %d\n",book.price);


    return 0;
}
