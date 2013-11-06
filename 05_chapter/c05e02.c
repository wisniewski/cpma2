#include <stdio.h>

int
main(void)
{
    int hour, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minutes);

    if((hour > 12) && (hour <=24))
    {
        hour -= 12;
        printf("%.2d:%.2d PM", hour, minutes);
    }
    else
    {
        printf("%.2d:%.2d AM", hour, minutes);
    }


    return 0;
}