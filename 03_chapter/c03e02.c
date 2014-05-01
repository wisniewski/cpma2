/* Print mech number, price and date */

#include <stdio.h>

int main(void)
{
    unsigned int number, date_day, date_month, date_year;
    float price;
    
    printf("Enter a number: ");
    scanf("%u", &number);
    printf("Enter a price: ");
    scanf("%f", &price);
    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%u/%u/%u", &date_day, &date_month, &date_year);

    printf("\nMerch\tUnit\tPurchase\n\tprice\tDate\n");
    printf("%u\t$%5.2f\t%.2u/%.2u/%.4u",number,price,date_day, date_month, date_year);

    return 0;
}