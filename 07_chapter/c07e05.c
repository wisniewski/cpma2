/* Print sizes of few types */

#include <stdio.h>

int main(void)
{
	printf("%zu\n", sizeof(char));
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(short));
	printf("%zu\n", sizeof(long));
	printf("%zu\n", sizeof(float));
	printf("%zu\n", sizeof(double));
	printf("%zu\n", sizeof(long double));

	return 0;
}

