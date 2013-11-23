#include <stdio.h>
#include <math.h>

long power_recursion(int x, int p)
{
    if(p == 0)
        return 1;
    else if(p % 2 == 0)
        return power_recursion(x, p/2) * power_recursion(x, p/2);
    else
        return x * power_recursion(x, p-1);
}

long power_book(int x, int p)
{
    if(!p)
        return 1;
    else
        return x*power_book(x, p-1);
}

int main(void)
{
    int number, power;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("Enter power: ");
    scanf("%d", &power);

    printf("Result (power book) is: %ld\n", power_book(number, power));
    printf("Result (power recursion) is: %ld\n", power_recursion(number, power));

    return 0;
}

