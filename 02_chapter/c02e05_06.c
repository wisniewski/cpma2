/* Calculate: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 */

#include <stdio.h>

int main(void)
{
    float x;
    printf("Enter a value for x: ");
    scanf("%f", &x);

    x = (((((3*x) + 2) * (x - 5)) * (x - 1)) * (x + 7)) * (x - 6);

    printf("Result (with Horner method): %.2f", x);

    return 0;
}