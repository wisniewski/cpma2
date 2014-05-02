/* Calculate square of number with Newton method */

#include <stdio.h>
#include <math.h>

int main(void)
{
	double number, precision;
	printf("Enter a number and precision (number, precision): ");
	scanf("%lf, %lf", &number, &precision);

	double tmp = number;
	while(fabs(tmp - (number / tmp)) > precision)
		tmp = ((tmp + (number / tmp)) / 2);

	printf("\n%f", tmp);
	
	return 0;
}

