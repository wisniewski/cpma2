#include <stdio.h>
#include <stdint.h>
int
main(void)
{
    uint16_t number;
    printf("Give a five-digit number (xxxxx): ");
    scanf("%u", &number);

    printf("Octal: %u%u%u%u%u",((((number/8)/8)/8)/8)%8,(((number/8)/8)/8)%8,((number/8)/8)%8,(number/8)%8,number%8);

    return 0;
}