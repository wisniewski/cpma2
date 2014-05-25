/* Fractions and greatest common divisor + pointers */

#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int number1, number2, up, down;
    printf("Enter a fraction (x/y): ");
    scanf("%d/%d", &number1, &number2);

    reduce(number1, number2, &up, &down);

    printf("Reduced: %d/%d", up, down);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int up = numerator;
    int down = denominator;

    while(denominator != 0)
    {
        int temp = numerator % denominator;
        numerator = denominator;
        denominator = temp;
    }

    *reduced_numerator = up/numerator;
    *reduced_denominator = down/numerator;
}