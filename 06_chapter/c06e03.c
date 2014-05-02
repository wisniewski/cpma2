/* Fractions and greatest common divisor */

#include <stdio.h>

int main(void)
{
    int number1, number2, up, down;
    printf("Enter a fraction (x/y): ");
    scanf("%d/%d", &number1, &number2);
    up = number1;
    down = number2;

    while(number2 !=0)
    {
        int temp = number1 % number2;
        number1 = number2;
        number2 = temp;
    }

    printf("Reduced: %d/%d", up/number1, down/number1);

    return 0;
}