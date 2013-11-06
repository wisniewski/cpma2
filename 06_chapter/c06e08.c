#include <stdio.h>

int
main(void)
{
    int number_of_days, first_day;

    printf("Enter number of days in month: ");
    scanf("%d", &number_of_days);

    printf("First day (1-sunday, 7-sat): ");
    scanf("%d", &first_day);

    for(int i = 0; i < first_day; i++)
        printf("  ");

    for(int i = first_day, counter = 1; i < number_of_days+first_day; i++, counter++)
        {
            printf("%3d", counter);
            if(!(i % 7))
                printf("\n");
        }
    return 0;
}