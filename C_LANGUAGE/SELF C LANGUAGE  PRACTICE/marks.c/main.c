#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;

    printf("Enter the marks of student : ");
    scanf("%d",&marks);

    if(marks>100 || marks<0)
        printf("Enter the valid marks");
    else
    {
        if(marks>80)
            printf("GRADE A");
            else if(marks>60)
                printf("GRADE B");
                else if(marks>50)
                    printf("GRADE C");
                    else if(marks>40)
                        printf("GRADE D");
                        else if(marks>35)
                            printf("GRADE E");
                                else
                                    printf("FAIL");

    }

    return 0;
}
