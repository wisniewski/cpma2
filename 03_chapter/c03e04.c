/* Print telephone number */

#include <stdio.h>

int main(void)
{
    unsigned int num1, num2, num3, num4;

    printf("Enter a telephone number (xx) xxx-xxxx: ");
    scanf("(%2u) %3u-%2u%2u", &num1, &num2, &num3, &num4);
    printf("Given number : 0-%.2u %.3u-%.2u-%.2u\n", num1, num2, num3, num4);

    return 0;
}