/* Repeated digits */ 

#include <stdio.h>

int main(void)
{
    int digit, digit_seen[10] = {0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }

    printf("Digits:   ");
    for(int i=0; i<10; i++)
    {
        printf("%3d ", i);
    }

    printf("\nHow many: ");
    for(int i=0; i<10; i++)
    {
        printf("%3d ", digit_seen[i]);
    }

    return 0;
}

