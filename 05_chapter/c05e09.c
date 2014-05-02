/* Date comparision */

#include <stdio.h>

int main(void)
{
    unsigned int day1, day2, month1, month2, year1, year2;
    
    printf("First date (dd/mm/yyyy): ");
    scanf("%u/%u/%u", &day1, &month1, &year1);
    printf("Second date (dd/mm/yyyy): ");
    scanf("%u/%u/%u", &day2, &month2, &year2);

    if(year1>year2)
        printf("Second date was earlier");
    else if(year1<year2)
        printf("First date was earlier");
    else
    {
        if(month1>month2)
            printf("Second date was earlier");
        else
            printf("First date was earlier");

        if(month1 == month2)
        {
            if(day1>day2)
                printf("Second date was earlier");
            else
                printf("First date was earlier");
        }
    }

    return 0;
}