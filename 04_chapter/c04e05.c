#include <stdio.h>

int
main(void)
{
    unsigned int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, control, sum1, sum2;
    printf("Give a 11-digit number: ");
    scanf("%1u%1u%1u%1u%1u%1u%1u%1u%1u%1u%1u", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);

    sum1 = (n1 + n3 + n5 + n7 + n9 + n11);
    sum2 = (n2 + n4 + n6 + n8 + n10);
    control = sum1*3 + sum2;
    control -= 1;
    control %= 10;
    control = 9 - control;

    printf("Control number: %d", control);

    return 0;
}