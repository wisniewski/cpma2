#include <stdio.h>

int
main(void)
{
    int number, i=0;
    printf("Enter a number: ");
    scanf("%d", &number);

    while(number != 0)
    {
        number /= 10;
        i++;
    }

    printf("Digits: %d", i);

    return 0;
}