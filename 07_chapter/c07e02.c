#include <stdio.h>

int 
main(void)
{
    long i, n;
    char a;


    printf("Enter limit on maximum square: ");
    scanf("%ld", &n);
    getchar() == ' ';
    for (i = 1; i <= n; i++)
    {
        printf("%10ld%10ld\n", i, i * i);
        if(i == 24)
        {
            do
            {
                printf("To continue press Enter");
            }
            while((a = getchar()) != '\n');
        }
    }
    return 0;
}

