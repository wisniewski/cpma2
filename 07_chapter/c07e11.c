/* calculate the expression */

#include <stdio.h>

int main(void)
{
    char operand;
    float number, sum = 0.0f;
    scanf("%f", &sum);

    while(1)
    {
        scanf("%c", &operand);
        if(operand == '\n')
            break;

        scanf("%f", &number);
        switch(operand)
        {
            case '+': sum += number; break;
            case '-': sum -= number; break;
            case '*': sum *= number; break;
            case '/': sum /= number; break;
        }
    }
    
    printf("%.2f", sum);

    return 0;
}

