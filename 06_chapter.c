----------------------------------------------------------------------------------
6 / 1
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    float number, maximum = 0;
    do
    {
        printf("Enter the number (zero will end): ");
        scanf("%f", &number);
        if(number > maximum)
            maximum = number;
    }
    while(number != 0);

    printf("Max: %.2f", maximum);

    return 0;
}
----------------------------------------------------------------------------------
6 / 2
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int number1, number2;
    printf("Enter numbers: ");
    scanf("%d %d", &number1, &number2);

	while(number2 != 0)
    {
        int temp;
        temp = number1 % number2;
        number1 = number2;
        number2 = temp;
    }

    printf("NWD: %d", number1);

    return 0;
}
----------------------------------------------------------------------------------
6 / 3
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int number1, number2, up, down;
    printf("Enter a fraction (x/y): ");
    scanf("%d/%d", &number1, &number2);
    up = number1;
    down = number2;

    while(number2 !=0)
    {
        int temp = number1 % number2;
        number1 = number2;
        number2 = temp;
    }

    printf("Reduced: %d/%d", up/number1, down/number1);

    return 0;
}
----------------------------------------------------------------------------------
6 / 4
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    float commission, value;

    printf("Enter a value of money: ");
    scanf("%f", &value);

    while(value != 0)
    {
        if (value < 2500.00f)
            commission = 30.00f + .017f * value;
        else if (value < 6250.00f)
            commission = 56.00f + .0066f * value;
        else if (value < 20000.00f)
            commission = 76.00f + .0034f * value;
        else if (value < 50000.00f)
            commission = 100.00f + .0022f * value;
        else if (value < 500000.00f)
            commission = 155.00f + .0011f * value;
        else
            commission = 255.00f + .0009f * value;

        if (commission < 39.00f)
            commission = 39.00f;

        printf("Commission: %.2f USD\n\n", commission);
        printf("Enter a value of money: ");
        scanf("%f", &value);
    }
    return 0;
}
----------------------------------------------------------------------------------
6 / 5
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int number, i=0;
    printf("Enter a number: ");
    scanf("%d", &number);

    while(number != 0)
    {
        number /= 10;
        i++;
    }

    printf("Digits: %d", i);

    return 0;
}
----------------------------------------------------------------------------------
6 / 6
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    for(int i = 1; i * i <= number; i++)
    {
        if(((i * i) % 2) == 0)
            printf("%d\n", (i * i));
    }

    return 0;
}
----------------------------------------------------------------------------------
6 / 7
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int i, n, odd, square;

    printf("Square table.\n");
    printf("Enter a number of rows: ");
    scanf("%d", &n);

    odd = 3;
    for (i = 1 ,square = 1; i <= n; odd += 2, ++i)
    {
        printf("%10d%10d\n", i, square);
        square += odd;
    }

    return 0;
}
----------------------------------------------------------------------------------
6 / 8
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int number_of_days, first_day;

    printf("Enter number of days in month: ");
    scanf("%d", &number_of_days);

    printf("First day (1-sunday, 7-sat): ");
    scanf("%d", &first_day);

    for(int i = 0; i < first_day; i++)
        printf("  ");

    for(int i = first_day, counter = 1; i < number_of_days+first_day; i++, counter++)
        {
            printf("%3d", counter);
            if(!(i % 7))
                printf("\n");
        }
    return 0;
}
----------------------------------------------------------------------------------
6 / 9
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    float loan, interest_rate, monthly, tmp, how_long;
    printf("Give amount of loan: ");
    scanf("%f", &loan);
    printf("Give amount of interest rate: ");
    scanf("%f", &interest_rate);
    printf("Give amount of monthly installment: ");
    scanf("%f", &monthly);
    printf("How many payments: ");
    scanf("%f", &how_long);

    interest_rate = (interest_rate / 100.0f) / 12.0f;

    for(int i = 1; i <= how_long; i++)
    {
        loan = (loan - monthly) + (loan * interest_rate);
        printf("After %d payment: %f\n", i, loan);
    }

    return 0;
}
----------------------------------------------------------------------------------
6 / 10
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    unsigned int day, month, year, day_tmp, month_tmp, year_tmp;
    unsigned int minimum = 0, actual;

    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%u/%u/%u", &day, &month, &year);

    minimum = (365 * year) + (30 * month) + day;
    day_tmp = day;
    month_tmp = month;
    year_tmp = year;

    while(1)
    {
        printf("Enter a date (dd/mm/yyyy): ");
        scanf("%u/%u/%u", &day, &month, &year);

        if((day == 0) && (month == 0) && (year == 0))
            break;

        actual = (365 * year) + (30 * month) + day;
        if(actual < minimum)
            {
                minimum = actual;
                day_tmp = day;
                month_tmp = month;
                year_tmp = year;
            }
    }

    printf("Earliest date: %u/%u/%u", day_tmp, month_tmp, year_tmp);

    return 0;
}
----------------------------------------------------------------------------------
6 / 11
----------------------------------------------------------------------------------
#include <stdio.h>

//e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!

int 
main(void)
{
    int number;
    float e = 1;

    printf("Enter number: ");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++)
    {
        int div = i;
        for(int j = div - 1; j > 0; j--)
            div *= j;
        e += (float) 1.f / div;
    }
    printf("%.3f", e);

    return 0;
}
----------------------------------------------------------------------------------
6 / 12
----------------------------------------------------------------------------------
#include <stdio.h>

//e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!

int 
main(void)
{
    int number;
    float e = 1.0f, current_value;

    printf("Enter number: ");
    scanf("%d", &number);
    printf("Enter floating-point number: ");
    scanf("%f", &current_value);

    printf("\ne = 1");
    for(int i = 1; i <= number; i++)
    {
        int div = i;
        for(int j = div - 1; j > 0; j--)
            div *= j;
        if(current_value > (float) 1.f / div)
            break;
        e += (float) 1.f / (float) 1.f / div;
        printf(" + %f", (float) 1.f / div);

    }
    printf("\n\ne = %.5f\n", e);

    return 0;
}
