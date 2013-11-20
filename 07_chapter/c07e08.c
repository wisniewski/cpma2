#include <stdio.h>

int
main(void)
{
    int hour, minutes;
    char letter;

    printf("Enter a 12-hour time (xx:xx pm/am): ");
    scanf("%d:%d %c", &hour, &minutes, &letter);

    switch(letter = toupper(letter))
    {
        case 'P': hour+=12; break;
        case 'A': ; break;

        default: printf("Try again"); return 0; break;
    }

    if((hour > 24) || (minutes > 59) || (hour < 1) || (minutes < 0))
    {
        printf("Try again, bad hour");
        return 0;
    }

    printf("24-hour time: %.2d:%.2d", hour, minutes);


    return 0;
}

