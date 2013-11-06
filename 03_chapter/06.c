#include <stdio.h>

int
main(void)
{
    int num1, num2, den1, den2;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d + %d/%d",&num1, &den1, &num2, &den2);
    num1 *= den2;
    num2 *= den1;
    den1 = den2 = den1 * den2;
    printf("Sum: %d/%d",num1+num2,den1);

    return 0;
}