#include <stdio.h>

int main(void)
{
    int n, row=0, col=0;

    printf("Enter size of magic square (odd number): ");
    scanf("%d", &n);

    if(((n % 2) == 0) || (n < 0))
    {
        printf("Enter odd number between 1-99");
        return 0;
    }
    //initialize by zero
    //magic square
    int magic[n][n], sum[2][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            magic[i][j]=0;
    //sum array
    for(int i=0; i<2; i++)
        for(int j=0; j<n; j++)
            sum[i][j] = 0;

    col = n / 2;

    for(int i=1; i<=n*n; i++)
    {
        magic[row][col] = i;

        if((row == 0) && (col != n-1))
        {
            row = n - 1;
            col++;
        }
        else if((col == n-1) && (row == 0))
        {
            row++;
        }
        else if(col == n-1)
        {
            col = 0;
            row--;
        }
        else if(magic[row-1][col+1] != 0)
            row++;
        else
        {
            row--;
            col++;
        }

    }
    //show our magic square
    for(int i=0; i<n; i++)
    {
        putchar('\n');
        for(int j=0; j<n; j++)
            printf("%7d", magic[i][j]);
    }

    //lets check out!
    printf("\n\n");
    //calculation sums in rows
    for(int row = 0; row < n; row++)
        for(int col = 0; col < n; col++)
            sum[0][row] +=  magic[row][col];

    //calculation sums in cols
    for(int col = 0; col < n; col++)
        for(int row = 0; row < n; row++)
            sum[1][col] +=  magic[row][col];

    printf("Sum in rows:\t");
    for(int col = 0; col < n; col++)
        printf("%5d", sum[0][col]);
    printf("\n");

    printf("Sum in cols:\t");
    for(int col = 0; col < n; col++)
        printf("%5d", sum[1][col]);
    printf("\n");

    return 0;
}

