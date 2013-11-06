#include <stdio.h>

int
main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(((number < 9) && (number >= 0)) || ((number <= 0) && (number > -10)))
        printf("1 digit");
    else if(((number < 99) && (number >= 10)) || ((number <= 10) && (number > -100)))
        printf("2 digit");
    else
        printf("3 digit");

    return 0;
}