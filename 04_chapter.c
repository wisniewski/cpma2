----------------------------------------------------------------------------------
4 / 1
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int number;
    printf("Enter a number (xx): ");
    scanf("%d", &number);
    printf("Inverse: %d%d",number%10, number/10);
    return 0;
}
----------------------------------------------------------------------------------
4 / 2
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int number;
    printf("Enter a number (xxx): ");
    scanf("%d", &number);
    printf("Inverse: %d%d%d",number%10, (number/10)%10, number / 100);
    return 0;
}
----------------------------------------------------------------------------------
4 / 3
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    int num1, num2, num3;
    printf("Give a number (xxx): ");
    scanf("%1d%1d%1d",&num1, &num2, &num3);

    printf("%d%d%d",num3,num2,num1);

    return 0;
}
----------------------------------------------------------------------------------
4 / 4
----------------------------------------------------------------------------------
#include <stdio.h>
#include <stdint.h>
int
main(void)
{
    uint16_t number;
    printf("Give a five-digit number (xxxxx): ");
    scanf("%u", &number);

    printf("Octal: %u%u%u%u%u",((((number/8)/8)/8)/8)%8,(((number/8)/8)/8)%8,((number/8)/8)%8,(number/8)%8,number%8);

    return 0;
}
----------------------------------------------------------------------------------
4 / 5
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    unsigned int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, control, sum1, sum2;
    printf("Give a 11-digit number: ");
    scanf("%1u%1u%1u%1u%1u%1u%1u%1u%1u%1u%1u", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);

    sum1 = (n1 + n3 + n5 + n7 + n9 + n11);
    sum2 = (n2 + n4 + n6 + n8 + n10);
    control = sum1*3 + sum2;
    control -= 1;
    control %= 10;
    control = 9 - control;

    printf("Control number: %d", control);

    return 0;
}
----------------------------------------------------------------------------------
4 / 6
----------------------------------------------------------------------------------
#include <stdio.h>

int
main(void)
{
    unsigned int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, control, sum1, sum2;
    printf("Give a 12-digit EAN number: ");
    scanf("%1u%1u%1u%1u%1u%1u%1u%1u%1u%1u%1u%1u", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    sum1 = (n2 + n4 + n6 + n8 + n10 + n12);
    sum2 = (n1 + n3 + n5 + n7 + n9 + n11);
    control = sum1*3 + sum2;
    control -= 1;
    control %= 10;
    control = 9 - control;

    printf("Control number: %d", control);

    return 0;
}
