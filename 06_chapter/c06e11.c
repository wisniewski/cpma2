#include <stdio.h>

//e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!

int 
main(void)
{
    int number;
    float e = 1;

    printf("Enter number: ");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++)
    {
        int div = i;
        for(int j = div - 1; j > 0; j--)
            div *= j;
        e += (float) 1.f / div;
    }
    printf("%.3f", e);

    return 0;
}