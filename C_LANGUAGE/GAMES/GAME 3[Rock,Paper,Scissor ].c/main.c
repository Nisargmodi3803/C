/**
                                ROCK,PAPER,SCISSOR GAME!!!!

            ROCK ---> R                              ROCK Vs SCISSOR ---> ROCK WINS!!!
            PAPER ---> P                             PAPER Vs SCISSOR ---> SCISSOR WINS!!!
            SCISSOR ---> S                           ROCK Vs PAPER ---> PAPER WINS!!!


    IN THIS GAME PLAYER AND COMPUTER WILL PLAY, PLAYER WILL BE ASKED HOW MANY TIMES HE/SHE WANT TO PLAY WITH COMPUTER.
    EACH WIN PLAYER GET ONE POINT AND SIMULTANEOUSLY FOR LOSE ONE POINT WILL BE GIVEN TO COMPUTER.
    WINNER WILL BE DECIDED AS PER POINTS......

                                BEST OF LUCK!!!!

*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int fun(char ,char );

int main()
{
    int number,n,i,game,temp;
    char computer,player;
    char decide[] = {'R','S','P'};
    int cpu_point=0,player_point=0;


    srand(time(0));
    number=(rand()%100);


    printf("WELCOME TO ROCK,PAPER,SCISSOR GAME\n\n");

    printf("***************************************************************\n\n");

    printf("Press 1 for Rock\n");
    printf("Press 2 for Paper\n");
    printf("Press 3 for Scissor\n\n");

    printf("***************************************************************\n\n");

    printf("Enter How Many Match You Want to Play Game With Computer : ");
    scanf("%d",&n);

    printf("\n***************************************************************\n\n");

    for(i=0;i<n;i++)
    {
        printf("Match Number :- %d\n",i+1);

        ///player Turns...

        printf("\nChose Rock or Paper or Scissor\n");
        scanf("%d",&temp);
        getchar();
        player = decide[temp - 1];
        printf("You Chose : %c\n",player);

        ///Computer Turns...

        printf("\nComputer Turns\n");

        if(number<33)
        {
            computer = 'R';
        }

        else if(number>33 && number<66)
        {
            computer = 'P';
        }

        else
        {
            computer = 'S';
        }

        printf("Computer Chose : %c\n\n",computer);


        game = fun(computer,player);

        /**
            If fun returns 0 then Draw...
            If fun returns 1 then player wins...
            If fun returns -1 then computer wins...
        */

        if(game == 0)
        {

            printf("It's Draw!!!\n");
        }

        else if(game == 1)
        {
            printf("You Win!!!\n");
            player_point+=1;

        }

        else if(game == -1)
        {
            printf("You Lose!!!\n");
            cpu_point+=1;

        }

        printf("Score\n");
        printf("Player = %d \t Computer = %d\n\n",player_point,cpu_point);

        printf("***************************************************************\n\n");
    }

    if(player_point > cpu_point)
    {
        printf("\nYou Won the Game!!!\n");
        printf("Your Final Score : %d\nComputer Final Score : %d\n\n",player_point,cpu_point);
    }

    else if(player_point < cpu_point)
    {
        printf("\nYou Lose the Game!!!\n");
        printf("Your Final Score : %d\nComputer Final Score : %d\n\n",player_point,cpu_point);
        printf("Better Luck Next Time\n\n");
    }

    else
    {
        printf("Match Draw!!!\n");
        printf("Your Final Score : %d\nComputer Final Score : %d\n\n",player_point,cpu_point);
    }
    printf("***************************************************************\n\n");

    return 0;
}

int fun(char computer,char player)
{
    if(computer == player)
    {
        return 0;
    }


    if(player == 'R' && computer == 'S')
    {
        return 1;
    }
    else if(player == 'S' && computer == 'R')
    {
        return -1;
    }


    if(player == 'S' && computer == 'P')
    {
        return 1;
    }
    else if(player == 'P' && computer == 'S')
    {
        return -1;
    }


    if(player == 'R' && computer == 'P')
    {
        return 1;
    }
    else if(player == 'P' && computer == 'R')
    {
        return -1;
    }


    return 0;
}

