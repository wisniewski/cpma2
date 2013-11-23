#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void generate_random_walk(char walk[10][10])
{
    unsigned int moves;
    int row=0, col=0, i=1;
    //dots everywhere!
    for(row = 0; row < 10; row++)
    {
        for(col = 0; col < 10; col++)
            walk[row][col] = '.';
    }

    row = col = 0;
    walk[row][col] = 'A';

    while(i < 26)
    {
        moves = rand() % 4;
        if(!check_dot(walk,row-1,col) && !check_dot(walk,row+1,col) && !check_dot(walk,row,col-1) && !check_dot(walk,row,col+1))
            i=26;

        switch(moves)
        {
        case 0: //up
        {

            if(check_dot(walk,row-1,col))
                walk[row-=1][col] = 'A'+i++;

        }
        break;

        case 1: //down
        {
            if((row+1<10) && (walk[row+1][col] == '.'))
                walk[row+=1][col] = 'A'+i++;

        }
        break;

        case 2: //right
        {
            if((col+1<10) && (walk[row][col+1] == '.'))
                walk[row][col+=1] = 'A'+i++;

        }
        break;

        case 3: //left
        {
            if((col-1>=0) && (walk[row][col-1] == '.'))
                walk[row][col-=1] = 'A'+i++;

        }
        break;
        }
    }
}

void print_array(char walk[10][10])
{
    //show our table (dots)
    for(int row = 0; row < 10; row++)
    {
        printf("\n");
        for(int col = 0; col < 10; col++)
            printf("%2c", walk[row][col]);
    }
    printf("\n\n");
}

int check_dot(char t[10][10],int x,int y)
{
    return (x>=0 && y>=0 && x<10 && y<10) && t[x][y]=='.';
}

int
main(void)
{
    char tab[10][10];
    srand((unsigned int) time(NULL));
    generate_random_walk(tab);
    print_array(tab);
    return 0;
}

