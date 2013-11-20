#include <stdio.h>

int
main(void)
{
    printf("%d\n", (int) sizeof(int));
    printf("%d\n", (int) sizeof(short));
    printf("%d\n", (int) sizeof(long));
    printf("%d\n", (int) sizeof(float));
    printf("%d\n", (int) sizeof(double));
    printf("%d\n", (int) sizeof(long double));

    return 0;
}

