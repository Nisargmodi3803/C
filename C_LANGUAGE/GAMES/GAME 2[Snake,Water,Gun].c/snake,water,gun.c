/**                       SNAKE,WATER,GUN GAME....
            FOR SNAKE = S.
            FOR WATER = W.
            FOR GUN = G.

            SNAKE Vs WATER ---> SNAKE WIN....
            WATER Vs GUN ---> WATER WIN....
            SNAKE Vs GUN ---> GUN WIN....

*/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int fun(char ,char );

int main()
{
    int n,g;
    char player,computer;

    srand(time(0));
    n=rand()%100 + 1;

    printf("WELCOME TO SNAKE,WATER,GUN GAME!!!\n\n");

    printf("Press S for snake\nPress W for Water\nPress G for Gun\n\n\n");

    ///computer turn

    printf("Computer Turn\nComputer has chosen from above\n\n");

    if(n<33)
    {
        computer='S';
    }

    else if(n>33 && n<66)
    {
        computer='W';
    }
    else
    {
        computer='G';
    }


    ///player turn

    printf("\nNow Your Turn chose From Above : ");
    scanf("%c",&player);

    g = fun(computer,player);
    /** If fun returns 0 then Draw...
        If fun returns 1 then player wins...
        If fun returns -1 then computer wins...
    */

    if(g==0)
    {
        printf("\nMatch Draw!!!\n");
    }
    else if(g==1)
    {
        printf("\nYou Win!!!\n");
    }
    else if(g==-1)
    {
        printf("\nYou Loss!!!\n");
        printf("Better Luck Next Time...\n");
    }

    printf("\nComputer Chose %c and You Chose %c\n",computer,player);

    return 0;
}

int fun(char computer,char player)
{

    if(computer == player)
    {
        return 0;
    }

    if(player == 'S' && computer == 'W')
    {
        return 1;
    }
    else if(player == 'W' && computer == 'S')
    {
        return -1;
    }

    if(player == 'G' && computer == 'S')
    {
        return 1;
    }
    else if(player == 'S' && computer == 'G')
    {
        return -1;
    }

    if(player == 'W' && computer == 'G')
    {
        return 1;
    }
    else if(player == 'G' && computer == 'W')
    {
        return -1;
    }

    return 0;

}
