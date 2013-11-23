#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void)
{
    int i = (rand() % 6) + 1;
    int j = (rand() % 6) + 1;
    return i + j;
}

_Bool play_game(void)
{
    int score = roll_dice();
    printf("Score: %d\n", score);
    if((score == 7) || (score == 11))
        return true;
    else if((score == 2) || (score == 3) || (score == 12))
        return false;
    else
    {
        int point = score;
        printf("Point: %d\n", point);
        while(1)
        {
            score = roll_dice();
            printf("Score: %d\n", score);
            if(score == point)
                return true;
            else if(score == 7)
                return false;
        }
    }
}

int main(void)
{
    int win=0, lose =0;
    char letter;
    srand((unsigned int) time(NULL));

    do
    {
        if(play_game())
        {
            win++;
            printf("You win!\n");
        }
        else
        {
            lose++;
            printf("You lose!\n");
        }
    printf("Would you want to play again? (enter/n) (%d): ", win+lose);
    } while(getchar() != 'n');


    printf("Wins: %d\nLoses: %d\n", win, lose);

    return 0;
}

