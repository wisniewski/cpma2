/* Compare n dates */

#include <stdio.h>

int main(void)
{
    unsigned int day, month, year, day_tmp, month_tmp, year_tmp;
    unsigned int minimum = 0, actual;

    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%u/%u/%u", &day, &month, &year);

    minimum = (365 * year) + (30 * month) + day;
    day_tmp = day;
    month_tmp = month;
    year_tmp = year;

    while(1)
    {
        printf("Enter a date (dd/mm/yyyy): ");
        scanf("%u/%u/%u", &day, &month, &year);

        if((day == 0) && (month == 0) && (year == 0))
            break;

        actual = (365 * year) + (30 * month) + day;
        if(actual < minimum)
        {
            minimum = actual;
            day_tmp = day;
            month_tmp = month;
            year_tmp = year;
        }
    }

    printf("Earliest date: %u/%u/%u", day_tmp, month_tmp, year_tmp);

    return 0;
}