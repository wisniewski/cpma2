#include <stdio.h>

int main(void)
{
    char sentence[40], last_character, letter;
    int length=0, last;
    printf("Enter a sentence: ");

    while((letter = getchar()) != '\n')
    {
        if(length < 40)
        {
            sentence[length] = letter;
            if((letter == '.') || (letter == '!') || (letter == '?'))
            {
                last_character = letter;
                break;
            }
            else
                length++;
        }

    }

    last = length;

    while(length>=0)
    {
        if((sentence[length-1] == ' ') || (length == 0))
        {
            for(int j = length; j<last; j++)
                printf("%c", sentence[j]);
            length--;
            last = length;
            if(length > 0)
                printf(" ");
        }
        else
            length--;
    }
    printf("%c", last_character);

    return 0;
}

