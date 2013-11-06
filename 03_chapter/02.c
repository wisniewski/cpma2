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