/* Calculate broker's commission */

#include <stdio.h>

int main(void)
{
    int shares;
    float price, commission, value, percentage, base;
    float minimum = 39.00f;

    printf("Shares: ");
    scanf("%d", &shares);

    printf("Price per share: ");
    scanf("%f", &price);

    value = price * shares;

    if (value < 2500.00f)
    {
        base = 30.00;
        percentage = .017f;
    }
    else if (value < 6250.00f)
    {
        base = 56.00;
        percentage = .0066f;
    }
    else if (value < 2000.00f)
    {
        base = 76.00;
        percentage = .0034f;
    }
    else if (value < 50000.00f)
    {
        base = 100.00;
        percentage = .0022f;
    }
    else if (value < 500000.00f)
    {
        base = 155.00;
        percentage = .0011f;
    }
    else
    {
        base = 255.00;
        percentage = .0009f;
    }

    commission = base + percentage * value;

    if (commission < minimum)
        commission = minimum;

    printf("Our Commission: $%.2f\n", commission);

    base = 33.00;
    percentage = 0.02f;

    if (shares > 2000)
        percentage = 0.03f;

    commission = base + shares * percentage;
    printf("Their Commission: $%.2f\n", commission);

    return 0;
}