#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int
main(void)
{
    srand((unsigned int) time(NULL));
    char sentence[100], letter;
    unsigned i = 0, j = 0;
    printf("Enter a sentence: ");

    while((letter = getchar()) != '\n')
    	sentence[i++] = letter;
    
    while(j < i)
    {
        letter = toupper(sentence[j++]);
        switch(letter)
        {
            case 'A': printf("4"); break;
            case 'B': printf("8"); break;
            case 'E': printf("3"); break;
            case 'I': printf("1"); break;
            case 'O': printf("0"); break;
            case 'S': printf("5"); break;
            default: printf("%c", letter); break;
        }
    }

    for(int i = 0; i< rand()%10; i++)
        printf("!");

    return 0;
}

