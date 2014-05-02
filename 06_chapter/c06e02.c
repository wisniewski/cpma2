/* Greatest common divisor */

#include <stdio.h>

int main(void)
{
    int number1, number2;
    printf("Enter numbers: ");
    scanf("%d %d", &number1, &number2);

	while(number2 != 0)
    {
        int temp;
        temp = number1 % number2;
        number1 = number2;
        number2 = temp;
    }

    printf("Greatest common divisor: %d", number1);

    return 0;
}