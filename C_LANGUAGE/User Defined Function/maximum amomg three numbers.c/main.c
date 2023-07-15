/*
//Without Return Statement....
#include <stdio.h>

void max(int,int,int);

int main()
{
    int a,b,c,lar;

    printf("Enter the three numbers : ");
    scanf("%d %d %d",&a,&b,&c);

    max(a,b,c);

    return 0;
}

void max(int a,int b,int c)
{
    if(a>b && a>c)
        printf("%d is largest number",a);
    else if(b>a && b>c)
        printf("%d is largest number",b);
    else
        printf("%d is largest number",c);

}*/

//With Return statement....
#include <stdio.h>

int max(int,int,int);

int main()
{
    int a,b,c,lar;

    printf("Enter the three numbers : ");
    scanf("%d %d %d",&a,&b,&c);

    lar = max(a,b,c);

    printf("%d is largest number",lar);
    return 0;
}

int max(int a,int b,int c)
{
    int num;

    if(a>b && a>c)
        num=a;
    else if(b>a && b>c)
        num=b;
    else
        num=c;

    return num;

}
