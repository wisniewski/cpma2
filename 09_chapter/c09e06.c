/* Calculate formula */

#include <stdio.h>

long power(int base, int exp)
{
	long result = 1;
	while(exp-- > 0)
		result *= base;

	return result;
}

long calculation_of_polynomial(int x)
{
    return 3*power(x,5) + 2*power(x,4) - 5*power(x,3) - power(x,2) + 7*x -6;
}

int main(void)
{
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Result is: %ld", calculation_of_polynomial(x));

    return 0;
}