/* Convert sentence into cypher */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char letter, sentence[80];
    int i=0, shift;

    printf("Enter a sentence: ");
    while((letter = getchar()) != '\n')
        sentence[i++] = letter;
    printf("Enter shift (1-25): ");
    scanf("%d", &shift);
    if((shift > 25) || (shift < 1))
        return 0;

    printf("Cypher: ");
    for(int j=0; j<i; j++)
    {
        if(isalnum(sentence[j]))
        {
            if(islower(sentence[j]))
            {
                char letter = sentence[j];
                printf("%c", ((letter - 'a') + shift) % 26 + 'a');
            }
            else
            {
                char letter = sentence[j];
                printf("%c", ((letter - 'A') + shift) % 26 + 'A');
            }
        }
        else
            printf("%c",sentence[j]);
    }

    return 0;
}