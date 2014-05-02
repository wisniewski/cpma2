/* Fractions with 4 operations */

#include <stdio.h>

int euclidean(int num, int den)
{
    int temp = 0;
    while(den)
    {
        temp = num % den;
        num = den;
        den = temp;
    }
    return num;
}

int main(void)
{
    int num1, num2, den1, den2, num, den, divide;
    char operation;
    printf("Enter two fractions separated by operator: ");
    scanf("%d/%d %c %d/%d",&num1, &den1, &operation, &num2, &den2);

    switch(operation)
    {
        case '+':
        {
            num1 *= den2;
            num2 *= den1;
            den1 = den2 = den1 * den2;
            num = num1+num2;
            den = den1;
            divide = euclidean(num, den);
            num /= divide;
            den /= divide;
            printf("Sum: %d/%d",num,den);
        }
        break;

        case '-':
        {
            num1 *= den2;
            num2 *= den1;
            den1 = den2 = den1 * den2;
            num = num1-num2;
            den = den1;
            divide = euclidean(num, den);
            num /= divide;
            den /= divide;
            printf("Difference: %d/%d",num, den);
        }
        break;

        case '*':
        {
            num = num1*num2;
            den = den1*den2;
            divide = euclidean(num, den);
            num /= divide;
            den /= divide;
            printf("Product: %d/%d",num, den);
        }
        break;

        case ':':
        {
            num = num1*den2;
            den = den1*num2;
            divide = euclidean(num, den);
            num /= divide;
            den /= divide;
            printf("Difference: %d/%d",num, den);
        }
        break;

    }
    return 0;
}

