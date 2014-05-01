/* Print date */

#include <stdio.h>

int main(void)
{
    unsigned int day, month, year;
    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%u/%u/%u", &day, &month, &year);
    printf("Now: %.4u%.2u%.2u",year, month, day);

    return 0;
}