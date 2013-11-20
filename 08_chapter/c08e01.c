#include <stdbool.h>
#include <stdio.h>

int
main(void)
{
    bool is_repeated = false;
    int digit, digit_seen[10] = {0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        if(digit_seen[digit])
            is_repeated = true;
        digit_seen[digit]++;
        n /= 10;
    }

    if(is_repeated)
    {
        printf("Repetited digits: ");
        for(int i=0; i<10; i++)
        {
            if(digit_seen[i]>1)
                printf("%d ", i);
        }
    }
    else
        printf("No repetition");

    return 0;
}

