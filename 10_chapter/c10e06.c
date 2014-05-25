/* Reverse polish notation */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define SIZE 20

int contents[SIZE];
int top=0;

_Bool is_full(void);
_Bool is_empty(void);
void push(int c);
int pop(void);

int main(void)
{
    char value;

    printf("Enter formula: ");
    
    while(value != '=')
    {
        value = getchar();

        if((value - '0' != '\n' - '0') && (value - '0' >= 0) && (value - '0' < 10))
            push(value - '0');

        switch(value)
        {
            case '+':
            {
                push(pop() + pop());
            }
            break;

            case '-':
            {
                 int subtrahend = pop();
                 int minuted = pop();
                 push((int)minuted - subtrahend);
            }
            break;

            case '*':
            {
                push(pop() * pop());
            }
            break;

            case '/':
            {
                int divisor = pop();
                int divided = pop();
                push(divided/divisor);
            }
            break;

            case '=':
            {
                int tmp = pop();
                if(is_empty())
                    printf("Result: %d", tmp);
            }
            break;

            default: continue;
        }
    }
    return 0;
}

_Bool is_full(void)
{
    return top == SIZE ? true : false;
}

_Bool is_empty(void)
{
    return top == 0 ? true : false;
}

void push(int c)
{
    if(is_full())
    {
        printf("Stack overflow\n");
        exit(0);
    }
    else
        contents[top++] = c;
}

int pop(void)
{
    if(is_empty())
    {
        printf("Stack underflow\n");
        exit(0);
    }
    else
        return contents[--top];
}