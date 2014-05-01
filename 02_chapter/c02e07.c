/* Denominations of United States currency */

#include <stdio.h>

int main(void)
{
    unsigned int amount;
    printf("Enter a dollar amount: ");
    scanf("%u", &amount);

    printf("Nominal 20: %u\n", amount / 20);
    printf("Nominal 10: %u\n", (amount % 20) / 10);
    printf("Nominal 5: %u\n", ((amount % 20) % 10) / 5);
    printf("Nominal 1: %u\n", (((amount % 20) % 10) % 5));

    return 0;
}