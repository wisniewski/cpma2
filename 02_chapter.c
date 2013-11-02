----------------------------------------------------------------------------------
2 / 1
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    printf("      *\n     *\n    *\n*  *\n **\n *");
    return 0;
}
----------------------------------------------------------------------------------
2 / 3
----------------------------------------------------------------------------------
#include <stdio.h>

#define FRACTION 4.0f/3.0f
#define PI 3.14159

int
main(void)
{
    float volume, radius;
    printf("Enter a radius: ");
    scanf("%f", &radius);

    volume = FRACTION * PI * radius * radius * radius;

    printf("Volume of sphere (with radius %.2f) is: %.2f", radius, volume);

    return 0;
}
----------------------------------------------------------------------------------
2 / 4
----------------------------------------------------------------------------------
#include <stdio.h>

#define TAX 0.05f

int
main(void)
{
    float amount;
    printf("Enter a dollar amount: ");
    scanf("%f", &amount);

    amount = (amount * TAX) + amount;

    printf("Current amount is: %.2f USD", amount);

    return 0;
}
----------------------------------------------------------------------------------
2 / 6
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    float x;
    printf("Enter a value for x: ");
    scanf("%f", &x);

    x = (((((3*x) + 2) * (x - 5)) * (x - 1)) * (x + 7)) * (x - 6);

    printf("Horner result is: %.2f", x);

    return 0;
}
----------------------------------------------------------------------------------
2 / 7
----------------------------------------------------------------------------------
#include <stdio.h>
#include <stdint.h>

int
main(void)
{
    uint16_t amount;
    printf("Enter a dollar amount: ");
    scanf("%u", &amount);

    printf("Nominal 20: %u\n", amount / 20);
    printf("Nominal 10: %u\n", (amount % 20) / 10);
    printf("Nominal 5: %u\n", ((amount % 20) % 10) / 5);
    printf("Nominal 1: %u\n", (((amount % 20) % 10) % 5));

    return 0;
}
----------------------------------------------------------------------------------
2 / 8
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    float loan, interest_rate, monthly, tmp;
    printf("Give amount of loan: ");
    scanf("%f", &loan);
    printf("Give amount of interest rate: ");
    scanf("%f", &interest_rate);
    printf("Give amount of monthly installment: ");
    scanf("%f", &monthly);

    interest_rate = (interest_rate / 100.0f) / 12.0f;

    loan = (loan - monthly) + (loan * interest_rate);
    printf("After first payment: %f\n", loan);

    loan = (loan - monthly) + (loan * interest_rate);
    printf("After second payment: %f\n", loan);

    loan = (loan - monthly) + (loan * interest_rate);
    printf("After third payment: %f\n", loan);
    return 0;
}
