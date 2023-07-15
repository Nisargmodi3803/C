#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],i,n,max,min,max_pos=0,min_pos=0;
    int *ptr=a,temp;

    printf("Enter Size : ");
    scanf("%d",&n);

    printf("\nArray Elements : \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }

    max = *(ptr+0);
    min = *(ptr+0);

    for(i=0;i<n;i++)
    {
        if(*(ptr+i) > max)
        {
            max = *(ptr+i);
            max_pos=i;
        }

        if(*(ptr+i) < min)
        {
            min = *(ptr+i);
            min_pos=i;
        }
    }

    printf("\nMaximum Number in Array : %d",*(ptr+max_pos));
    printf("\nMinimum Number in Array : %d",*(ptr+min_pos));

    temp = *(ptr+min_pos);
    *(ptr+min_pos) = *(ptr+max_pos);
    *(ptr+max_pos) = temp;

    printf("\n\nAfter Swapping Array Elements : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(ptr+i));
    }
    return 0;
}
