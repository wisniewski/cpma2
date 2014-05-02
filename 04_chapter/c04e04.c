/* Get decimal, print octal without %.5o */

#include <stdio.h>

int main(void)
{
    unsigned int number;
    
    printf("Give a number between 0 and 32767: ");
    scanf("%u", &number);

    printf("Octal: %u%u%u%u%u",((((number/8)/8)/8)/8)%8,(((number/8)/8)/8)%8,((number/8)/8)%8,(number/8)%8,number%8);

    return 0;
}