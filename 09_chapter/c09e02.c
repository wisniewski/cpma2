#include <stdio.h>

float tax(float *inc)
{
    if(*inc < 750)
        return (*inc * 0.01f);
    else if(*inc < 2250)
        return ((*inc - 750.0f) * 0.02f + 7.4f);
    else if(*inc < 3750)
        return ((*inc - 2250.0f) * 0.03f + 37.5f);
    else if(*inc < 5250)
        return ((*inc - 3750.0f) * 0.04f + 82.5f);
    else if(*inc < 7000)
        return ((*inc - 5250.0f) * 0.05f + 142.5f);
    else
        return ((*inc - 7000.0f) * 0.06f + 230.0f);
}

int main(void)
{
   float income;
    printf("Enter amount of taxable income: ");
    scanf("%f", &income);

    printf("Tax: %.2f", tax(&income));

    return 0;
}

