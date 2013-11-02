----------------------------------------------------------------------------------
5 / 1
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(((number < 9) && (number >= 0)) || ((number <= 0) && (number > -10)))
        printf("1 digit");
    else if(((number < 99) && (number >= 10)) || ((number <= 10) && (number > -100)))
        printf("2 digit");
    else
        printf("3 digit");

    return 0;
}
----------------------------------------------------------------------------------
5 / 2
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int hour, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minutes);

    if((hour > 12) && (hour <=24))
    {
        hour -= 12;
        printf("%.2d:%.2d PM", hour, minutes);
    }
    else
    {
        printf("%.2d:%.2d AM", hour, minutes);
    }


    return 0;
}
----------------------------------------------------------------------------------
5 / 3
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int shares;
    float price, commission, value, percentage, base;
    float minimum = 39.00f;

    printf("Shares: ");
    scanf("%d", &shares);

    printf("Price per share: ");
    scanf("%f", &price);

    value = price * shares;

    if (value < 2500.00f)
    {
        base = 30.00;
        percentage = .017f;
    }
    else if (value < 6250.00f)
    {
        base = 56.00;
        percentage = .0066f;
    }
    else if (value < 2000.00f)
    {
        base = 76.00;
        percentage = .0034f;
    }
    else if (value < 50000.00f)
    {
        base = 100.00;
        percentage = .0022f;
    }
    else if (value < 500000.00f)
    {
        base = 155.00;
        percentage = .0011f;
    }
    else
    {
        base = 255.00;
        percentage = .0009f;
    }

    commission = base + percentage * value;

    if (commission < minimum)
        commission = minimum;

    printf("Our Commission: $%.2f\n", commission);

    base = 33.00;
    percentage = 0.02f;

    if (shares > 2000)
        percentage = 0.03f;

    commission = base + shares * percentage;
    printf("Their Commission: $%.2f\n", commission);

    return 0;
}
----------------------------------------------------------------------------------
5 / 4
----------------------------------------------------------------------------------
#include <stdio.h>

int 
main(void)
{
    int scale;
    printf("Wind speed: ");
    scanf("%d", &scale);

    if(scale < 1)
        printf("Calm");
    else if((scale <= 3))
        printf("Light air");
    else if(scale <=27)
        printf("Breeze");
    else if(scale <= 47)
        printf("Gale");
    else if(scale <= 63)
        printf("Storm");
    else
        printf("Hurricane");

    return 0;
}
----------------------------------------------------------------------------------
5 / 5
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
   float income;
    printf("Enter amount of taxable income: ");
    scanf("%f", &income);

    if(income < 750)
        printf("Tax: %.2f", income * 0.01f);
    else if(income < 2250)
        printf("Tax: %.2f", (income - 750.0f) * 0.02f + 7.4f);
    else if(income < 3750)
        printf("Tax: %.2f", (income - 2250.0f) * 0.03f + 37.5f);
    else if(income < 5250)
        printf("Tax: %.2f", (income - 3750.0f) * 0.04f + 82.5f);
    else if(income < 7000)
        printf("Tax: %.2f", (income - 5250.0f) * 0.05f + 142.5f);
    else
        printf("Tax: %.2f", (income - 7000.0f) * 0.06f + 230.0f);

    return 0;
}
----------------------------------------------------------------------------------
5 / 6
----------------------------------------------------------------------------------
#include <stdio.h>

int 
main(void)
{
  int check_digit, d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
      first_sum, second_sum, total;

  printf("Enter the first (single) digit: ");
  scanf("%1d", &d);
  printf("Enter first group of five digits: ");
  scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
  printf("Enter second group of five digits: ");
  scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
  printf("Enter the last (single) digit: ");
  scanf("%1d", &check_digit);

  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = 3 * first_sum + second_sum;

  if (check_digit == 9 - ((total - 1) % 10))
    printf("VALID\n");
  else
    printf("NOT VALID\n");

  return 0;
}
----------------------------------------------------------------------------------
5 / 7
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int num1, num2, num3, num4, maximum1, maximum2, minimum1, minimum2;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if(num1 > num2)
        {
            maximum1 = num1;
            minimum1 = num2;
        }
    else
    {
        maximum1 = num2;
        minimum1 = num1;
    }

     if(num3 > num4)
        {
            maximum2 = num3;
            minimum2 = num4;
        }
    else
    {
        maximum2 = num3;
        minimum2 = num4;
    }

    if(maximum1 > maximum2)
        printf("Max: %d\n", maximum1);
    else
        printf("Max: %d\n", maximum2);

    if(minimum1 < minimum2)
        printf("Min: %d\n", minimum1);
    else
        printf("Min: %d\n", minimum2);


    return 0;
}
----------------------------------------------------------------------------------
5 / 8
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int hour, minutes, converter;
    printf("Enter a 24-hour time (xx:xx): ");
    scanf("%d:%d", &hour, &minutes);
    converter = (hour * 60) + minutes;

    if((converter >= 2*60) && (converter <= 531))
        printf("8:00, arriving at 10:16");
    else if((converter >= 531) && (converter < 10*6+31))
        printf("9:43, arriving at 11:52");
    else if((converter >= 10*6+31) && (converter < 12*6+15))
        printf("11:19, arriving at 13:31");
    else if((converter >= 12*6+15) && (converter < 13*60+23))
        printf("12:47, arriving at 15:00");
    else if((converter >= 13*60+23) && (converter < 14*60+52))
        printf("14:00, arriving at 16:08");
    else if((converter >= 14*60+52) && (converter < 16*60+37))
        printf("15:45, arriving at 17:55");
    else if((converter >= 16*60+37) && (converter < 19*6+52))
        printf("19:00, arriving at 21:20");
    else if((converter < 2*60) || (converter >= 19*6+52))
        printf("21:45, arriving at 23:58");


    return 0;
}
----------------------------------------------------------------------------------
5 / 9
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int day1, day2, month1, month2, year1, year2;
    printf("First date (dd/mm/yyyy): ");
    scanf("%d/ %d/ %d", &day1, &month1, &year1);
    printf("Second date (dd/mm/yyyy): ");
    scanf("%d/ %d/ %d", &day2, &month2, &year2);

    if(year1>year2)
        printf("Second date was earlier");
    else if( year1<year1)
        printf("First date was earlier");

    else if(year1 == year2)
    {
        if(month1>month2)
            printf("Second date was earlier");
        else if(month1<month2)
            printf("First date was earlier");

        if(month1 == month2)
        {
           if(day1>day2)
                printf("Second date was earlier");
            else if(day1<day2)
                printf("First date was earlier");
        }
    }
    return 0;
}
----------------------------------------------------------------------------------
5 / 10
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int grade;
    printf("Points: ");
    scanf("%d", &grade);

    if((grade < 0) || (grade > 100))
        printf("Error");
    else
    {
        switch(grade / 10)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: puts("F"); break;
        case 6: puts("D"); break;
        case 7: puts("C"); break;
        case 8: puts("B"); break;
        case 9:
        case 10: puts("A"); break;
        }
    }
    return 0;
}
----------------------------------------------------------------------------------
5 / 11
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int number, digit1, digit2;
    printf("Two-digit number (xx): ");
    scanf("%d", &number);

    digit1 = number - (number % 10);
    digit2 = number % 10;

    if((number < 10) || (number > 99))
        printf("Error");
    else
    {
        if(digit1 == 10)
        {
            switch(digit2)
            {
                case 0: printf("Ten"); break;
                case 1: printf("Eleven"); break;
                case 2: printf("Twelve"); break;
                case 3: printf("Thirteen"); break;
                case 4: printf("Fourteen"); break;
                case 5: printf("Fifteen"); break;
                case 6: printf("Sixteen"); break;
                case 7: printf("Seventeen"); break;
                case 8: printf("Eighteen"); break;
                case 9: printf("Nineteen"); break;
            }
        }
        else
        {
            switch(digit1)
            {
                case 20: printf("Twenty"); break;
                case 30: printf("Thirty"); break;
                case 40: printf("Fourty"); break;
                case 50: printf("Fifty"); break;
                case 60: printf("Sixty"); break;
                case 70: printf("Seventy"); break;
                case 80: printf("Eighty"); break;
                case 90: printf("Ninety"); break;
            }
            switch(digit2)
            {
                case 0: ; break;
                case 1: printf("-one"); break;
                case 2: printf("-two"); break;
                case 3: printf("-three"); break;
                case 4: printf("-four"); break;
                case 5: printf("-five"); break;
                case 6: printf("-six"); break;
                case 7: printf("-seven"); break;
                case 8: printf("-eight"); break;
                case 9: printf("-nine"); break;
            }
        }
    }
    return 0;
}
