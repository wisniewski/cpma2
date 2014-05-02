/* Calculate tax */

#include <stdio.h>

int main(void)
{
    float income;
    printf("Enter amount of taxable income: ");
    scanf("%f", &income);

    if(income < 750)
        printf("Tax: %.2f", income * 0.01f);
    else if(income < 2250)
        printf("Tax: %.2f", (income - 750.0f) * 0.02f + 7.4f);
    else if(income < 3750)
        printf("Tax: %.2f", (income - 2250.0f) * 0.03f + 37.5f);
    else if(income < 5250)
        printf("Tax: %.2f", (income - 3750.0f) * 0.04f + 82.5f);
    else if(income < 7000)
        printf("Tax: %.2f", (income - 5250.0f) * 0.05f + 142.5f);
    else
        printf("Tax: %.2f", (income - 7000.0f) * 0.06f + 230.0f);

    return 0;
}