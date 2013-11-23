#include <stdio.h>
#include <math.h>

long calculation_of_polynomial(int x)
{
    long result=0;

    result = 3*pow(x,5) + 2*pow(x,4) - 5*pow(x,3) - pow(x,2) + 7*x -6;

    return result;

}

int main(void)
{
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Result is: %ld", calculation_of_polynomial(x));

    return 0;
}

