/* Reverse digits in number */

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    while(number != 0)
    {
        printf("%d", number % 10);
        number /= 10;
    }

    return 0;
}