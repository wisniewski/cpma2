/* Checking brackets */

#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

char contents[SIZE];
int top=0;

_Bool is_full(void);
_Bool is_empty(void);
int push(char c);
int pop(void);

int main(void)
{
    char bracket;
    int how_many=0, good_bracket=0;
    printf("Enter brackets: ");
    while(bracket != '\n')
    {
        bracket = getchar();
        
        if((bracket == '(') || (bracket == '{'))
        {
            how_many++;
            if(push(bracket)) //if overflow nd program
                return 0;
        }
        else if((bracket == ')') || (bracket == '}'))
        {
            if(pop()) //if underflow end program
                return 0;
            
            if(((contents[top] == '(') && (bracket == ')')) || ((contents[top] == '{') && (bracket == '}')))
            {
                good_bracket++;
            }
            else //bad bracket
            {
                puts("Bad bracket! Exiting!");
                break;
            }
        }
    }

    if((top == 0) && (how_many == good_bracket)) //chech if everything if fine
        puts("Everything OK!");
    else // eg. (()
        puts("Bad bracket! Exiting!");
    
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

int push(char c)
{
    if(is_full())
    {
        printf("Stack overflow\n");
        return 1;
    }
    else
    {
        contents[top++] = c;
        return 0;
    }
}

int pop(void)
{
    if(is_empty())
    {
        printf("Stack underflow\n");
        return 1;
    }
    else
    {
        --top;
        return 0;
    }
}