#include <stdio.h>

int
main(void)
{
    int number;
    printf("Enter a number (xxx): ");
    scanf("%d", &number);
    printf("Inverse: %d%d%d",number%10, (number/10)%10, number / 100);
    return 0;
}