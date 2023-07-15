/*

if 1 to 8 we get -->
1x1=1,2x1=2,3x1=3,4x1=4,5x1=5,6x1=6,7x1=7,8x1=8.
................................................
................................................
1x10=10,2x10=20,3x10=30,4x10=40.......8x10=80.

*/

#include<stdio.h>

int main()
{
    int n,i,j,mul;

    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        for(j=1;j<=n;j++)
        {
            mul = j*i;
            printf("%dx%d=%d ",j,i,mul);
        }
        printf("\n\n");
    }
    return 0;
}
