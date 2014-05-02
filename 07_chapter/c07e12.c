/* Average word length in sentence */

#include <stdio.h>

int main(void)
{
    int all_letters=0, how_many_words=0;
    char letter, last_letter = 'a';

    printf("Enter sentence: ");

    while(letter != '\n')
    {
        letter = getchar();

        if(((letter == ' ') || ((letter == '\n'))) && (last_letter != ' '))
            how_many_words++;

        else if(letter != ' ')
            all_letters++;

        last_letter = letter;
    }

    printf("Average word length: %.1f", (float) all_letters / how_many_words);

    return 0;
}

