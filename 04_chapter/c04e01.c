/* Reverse 2-digit number */

#include <stdio.h>

int main(void)
{
    int number;
    
    printf("Enter a number (xx): ");
    scanf("%2d", &number);
    printf("Inverse: %d%d",number%10, number/10);

    return 0;
}