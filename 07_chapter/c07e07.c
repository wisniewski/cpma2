/* Show time in 12-hour format */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour, minutes, converter;
    char letter;

    printf("Enter a 12-hour time (xx:xx): ");
    scanf("%d:%d %c", &hour, &minutes, &letter);

    switch(letter = toupper(letter))
    {
        case 'P': hour+=12; break;
        case 'A': ; break;

        default: printf("Try again"); return 0; break;
    }

    converter = (hour * 60) + minutes;

    if((converter >= 2*60) && (converter <= 531))
        printf("8:00, arriving at 10:16");
    else if((converter >= 531) && (converter < 10*6+31))
        printf("9:43, arriving at 11:52");
    else if((converter >= 10*6+31) && (converter < 12*6+15))
        printf("11:19, arriving at 13:31");
    else if((converter >= 12*6+15) && (converter < 13*60+23))
        printf("12:47, arriving at 15:00");
    else if((converter >= 13*60+23) && (converter < 14*60+52))
        printf("14:00, arriving at 16:08");
    else if((converter >= 14*60+52) && (converter < 16*60+37))
        printf("15:45, arriving at 17:55");
    else if((converter >= 16*60+37) && (converter < 19*6+52))
        printf("19:00, arriving at 21:20");
    else if((converter < 2*60) || (converter >= 19*6+52))
        printf("21:45, arriving at 23:58");

    return 0;
}