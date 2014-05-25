/* Printing digits in 7-segment format */

#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10
#define HEIGHT 3
#define LENGTH 4
#define SEGMENT 7
#define COLUMNS (LENGTH*MAX_DIGITS)

const int segments[MAX_DIGITS][SEGMENT] =
{
    {1, 1, 1, 1, 1, 1, 0}, //0
    {0, 1, 1, 0, 0, 0, 0}, //1
    {1, 1, 0, 1, 1, 0, 1}, //2
    {1, 1, 1, 1, 0, 0, 1}, //3
    {0, 1, 1, 0, 0, 1, 1}, //4
    {1, 0, 1, 1, 0, 1, 1}, //5
    {1, 0, 1, 1, 1, 1, 1}, //6
    {1, 1, 1, 0, 0, 0, 0}, //7
    {1, 1, 1, 1, 1, 1, 1}, //8
    {1, 1, 1, 1, 0, 1, 1} //9
};

char digits[HEIGHT][COLUMNS];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
    char entered_number[MAX_DIGITS], tmp_char;
    int counter = 0;
    clear_digits_array();


    printf("Enter (max 10) digit numer: ");
    tmp_char = getchar();
    while ((tmp_char != '\n'))
    {

        if ((isdigit(tmp_char)) && (counter < MAX_DIGITS))
        {
            entered_number[counter] = tmp_char;
            process_digit(entered_number[counter] - '0', counter);
            counter++;
        }
        tmp_char = getchar();
    }

    print_digits_array();
    printf("\nHow many numbers: %d\n", counter);

    return 0;
}

void clear_digits_array(void)
{
    for (int row = 0; row < HEIGHT; row++)
        for (int col = 0; col < COLUMNS; col++)
            digits[row][col] = ' ';
}

void process_digit(int digit, int position)
{
    char elements[SEGMENT] = "_||_||_";
    int distance[7][2]={{0,1}, {1,2}, {2,2}, {2,1}, {2,0}, {1,0}, {1,1}};

    for (int i = 0; i < SEGMENT; i++)
        if (segments[digit][i] == 1)
            digits[distance[i][0]][position * 4 + distance[i][1]] = elements[i];
}

void print_digits_array(void)
{
    for (int row = 0; row < HEIGHT; row++)
    {
        puts(""); //new row
        for (int col = 0; col < COLUMNS; col++)
            printf("%c", digits[row][col]);
    }
    puts("");
}