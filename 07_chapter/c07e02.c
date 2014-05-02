/* Print number and number's square */

#include <stdio.h>

int main(void)
{
    unsigned long i, n;

    printf("Enter limit on maximum square: ");
    scanf("%lu", &n);
    getchar(); //I dont want previous \n when i == 24

    for (i = 1; i <= n; i++)
    {
        printf("%10lu%10lu\n", i, i * i);
        if(i == 24)
        {
            printf("To continue press Enter");
            getchar();
        }
    }

    return 0;
}

