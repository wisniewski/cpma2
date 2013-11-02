----------------------------------------------------------------------------------
3 / 1
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int day, month, year;
    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("Now: %.4d%.2d%.2d",year, month, day);

    return 0;
}
----------------------------------------------------------------------------------
3 / 2
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int number, date_day, date_month, date_year;
    float price;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter a price: ");
    scanf("%f", &price);
    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &date_day, &date_month, &date_year);

    printf("\n");

    printf("Merch\tUnit\tPurchase\n\tprice\tDate\n");
    printf("%d\t$%5.2f\t%.2d/%.2d/%.2d",number,price,date_day, date_month, date_year);

    printf("\n");

    return 0;
}
----------------------------------------------------------------------------------
3 / 3
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    unsigned int gsi, group, code, number, check_out;

    printf("Enter ISBN (GSI-GROUP-CODE-NUMBER-CHECK OUT): ");
    scanf("%u-%u-%u-%u-%u", &gsi, &group, &code, &number, &check_out);
    printf("GSI : %u\n", gsi);
    printf("Group : %u\n", group);
    printf("Code : %u\n", code);
    printf("Number : %u\n", number);
    printf("Check out : %u\n", check_out);

    return 0;
}
----------------------------------------------------------------------------------
3 / 4
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    unsigned int num1, num2, num3, num4;

    printf("Enter a telephone number (xx) xxx-xxxx: ");
    scanf("(%u) %u-%2u%2u", &num1, &num2, &num3, &num4);
    printf("Given number : 0-%.2u %.3u-%.2u-%.2u\n", num1, num2, num3, num4);

    return 0;
}
----------------------------------------------------------------------------------
3 / 5
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int r1_1, r1_2, r1_3, r1_4;
    int r2_1, r2_2, r2_3, r2_4;
    int r3_1, r3_2, r3_3, r3_4;
    int r4_1, r4_2, r4_3, r4_4;

    printf("Enter 16 numbers: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
          &r1_1, &r1_2, &r1_3, &r1_4,
          &r2_1, &r2_2, &r2_3, &r2_4,
          &r3_1, &r3_2, &r3_3, &r3_4,
          &r4_1, &r4_2, &r4_3, &r4_4);

    printf("1 row: %d %d %d %d\n", r1_1, r1_2, r1_3, r1_4);
    printf("2 row: %d %d %d %d\n", r2_1, r2_2, r2_3, r2_4);
    printf("3 row: %d %d %d %d\n", r3_1, r3_2, r3_3, r3_4);
    printf("4 row: %d %d %d %d\n", r4_1, r4_2, r4_3, r4_4);

    printf("Sum in rows: %d %d %d %d\n",r1_1+r1_2+r1_3+r1_4, r2_1+r2_2+r2_3+r2_4, r3_1+r3_2+r3_3+r3_4, r4_1+r4_2+r4_3+r4_4);
    printf("Sum in columns: %d %d %d %d\n",r1_1+r2_1+r3_1+r4_1, r1_2+r2_2+r3_2+r4_2, r1_3+r2_3+r3_3+r4_3, r1_4+r2_4+r3_4+r4_4);
    printf("Sum in diagonal: %d %d\n", r1_1+r2_2+r3_3+r4_4, r1_4+r2_3+r3_2+r4_1);
    return 0;
}
----------------------------------------------------------------------------------
3 / 6
----------------------------------------------------------------------------------
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
