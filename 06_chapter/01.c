#include <stdio.h>

int
main(void)
{
    float number, maximum = 0;
    do
    {
        printf("Enter the number (zero will end): ");
        scanf("%f", &number);
        if(number > maximum)
            maximum = number;
    }
    while(number != 0);

    printf("Max: %.2f", maximum);

    return 0;
}