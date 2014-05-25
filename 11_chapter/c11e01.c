/* Denominations of United States currency + pointers */

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int*fives, int *ones);

int main(void)
{
    int amount, twenty, ten, five, one;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    pay_amount(amount, &twenty, &ten, &five, &one);

    printf("Nominal 20: %d\n", twenty);
    printf("Nominal 10: %d\n", ten);
    printf("Nominal 5: %d\n", five);
    printf("Nominal 1: %d\n", one);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    *tens = (dollars % 20) / 10;
    *fives = ((dollars % 20) % 10) / 5;
    *ones = (((dollars % 20) % 10) % 5);
}