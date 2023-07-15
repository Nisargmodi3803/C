#include<stdio.h>

void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
    goodmorning();

    return 0;
}

void goodmorning()
{
    printf("Good Morning Nisarg\n");
    goodafternoon();
}

void goodafternoon()
{
    printf("Good Afternoon Nisarg\n");
    goodnight();
}

void goodnight()
{
    printf("Good Night Nisarg\n");
}
