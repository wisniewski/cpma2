/* Calculate //e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! with limiter */

#include <stdio.h>

int main(void)
{
    int number;
    float e = 1.0f, current_value;

    printf("Enter number: ");
    scanf("%d", &number);
    printf("Enter floating-point number: ");
    scanf("%f", &current_value);

    printf("\ne = 1");
    for(int i = 1; i <= number; i++)
    {
        int div = i;
        for(int j = div - 1; j > 0; j--)
            div *= j;
        if(current_value > (float) 1.f / div)
            break;
        e += (float) 1.f / (float) 1.f / div;
        printf(" + %f", (float) 1.f / div);
    }
    printf("\n\ne = %.5f\n", e);

    return 0;
}
