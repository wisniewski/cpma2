/* Show how many is vowels in sentence */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    unsigned int counter=0;
    char letter=0;

    printf("Enter a sentence: ");
    while((letter = getchar()) != '\n')
    {
        switch(toupper(letter))
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
            counter++;
            break;
        }

    }
    
    printf("Sentence contains %u vowels.\n\n", counter);

    return 0;
}

