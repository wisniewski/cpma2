#include <stdio.h>

#define SIZE 5

int main(void)
{
    int matrix[SIZE][SIZE], sum[2][5]= {{0}};

    for(int row = 0; row < SIZE; row++)
    {
        printf("Enter numbers in %d row: ", row);
        for(int col = 0; col < SIZE; col++)
            scanf("%d", &matrix[row][col]);
    }

    //calculation sums in rows
    for(int row = 0; row < SIZE; row++)
        for(int col = 0; col < SIZE; col++)
            sum[0][row] +=  matrix[row][col];

    //calculation sums in cols
    for(int col = 0; col < SIZE; col++)
        for(int row = 0; row < SIZE; row++)
            sum[1][col] +=  matrix[row][col];

    printf("Sum in rows:\t");
    for(int col = 0; col < SIZE; col++)
        printf("%5d", sum[0][col]);
    printf("\n");

    printf("Sum in cols:\t");
    for(int col = 0; col < SIZE; col++)
        printf("%5d", sum[1][col]);
    printf("\n");

    //check out
    printf("Matrix is: ");
    for(int row = 0; row < SIZE; row++)
    {
        putchar('\n');
        for(int col = 0; col < SIZE; col++)
            printf("%3d", matrix[row][col]);
    }

    return 0;
}

