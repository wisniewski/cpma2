#include <stdio.h>

int
main(void)
{
    int digit, digit_seen[10] = {0};
    long n, tmp;

    printf("Enter a number: ");
    scanf("%ld", &n);
    while(n > 0)
    {
        tmp = n;
        for(int i=0; i<10; i++)
            digit_seen[i] = 0;

        while (tmp > 0)
        {
            digit = tmp % 10;
            digit_seen[digit]++;
            tmp /= 10;
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

        printf("\nEnter a number: ");
        scanf("%ld", &n);
    }

    return 0;
}

