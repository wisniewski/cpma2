/* Reverse 3-digit number */

#include <stdio.h>

int main(void)
{
	unsigned int number;

	printf("Enter a number (xxx): ");
	scanf("%3u", &number);
	printf("Inverse: %u%u%u",number%10, (number/10)%10, number / 100);

	return 0;
}