/* Reverse 3-digit number without modulo */

#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    
    printf("Give a number (xxx): ");
    scanf("%1d%1d%1d",&num1, &num2, &num3);

    printf("%d%d%d",num3,num2,num1);

    return 0;
}