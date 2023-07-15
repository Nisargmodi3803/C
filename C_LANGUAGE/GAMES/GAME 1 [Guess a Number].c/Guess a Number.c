#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int guess,n_guess,n;

    srand(time(0));
    n=rand()%100 + 1;

    //printf("Random number is %d",n);

    do
    {
        printf("Guess a Number Between 1 to 100 : ");
        scanf("%d",&guess);

        if(guess<n)
            printf("Higher Number Please\n\n");
        else if(guess>n)
            printf("Lower Number Please\n\n");
        else
            printf("You Guess in %d Attempts\n",n_guess);

        n_guess++;
    }
    while(guess!=n);


    return 0;
}
