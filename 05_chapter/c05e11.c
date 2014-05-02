/* Print number */

#include <stdio.h>

int main(void)
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