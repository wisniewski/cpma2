/* Amount of loan */

#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly;
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