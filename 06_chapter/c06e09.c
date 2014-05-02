/* Amount of loan */

#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly, how_long;
    printf("Give amount of loan: ");
    scanf("%f", &loan);
    printf("Give amount of interest rate: ");
    scanf("%f", &interest_rate);
    printf("Give amount of monthly installment: ");
    scanf("%f", &monthly);
    printf("How many payments: ");
    scanf("%f", &how_long);

    interest_rate = (interest_rate / 100.0f) / 12.0f;

    for(int i = 1; i <= how_long; i++)
    {
        loan = (loan - monthly) + (loan * interest_rate);
        printf("After %d payment: %f\n", i, loan);
    }

    return 0;
}