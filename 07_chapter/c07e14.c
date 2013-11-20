#include <stdio.h>

int factorial(int number)
{
    if(number == 0) return 1;
    else return number * factorial(number-1);
}

int
main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial is %d from number %d",factorial(number) ,number);

    return 0;
}

