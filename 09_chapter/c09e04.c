#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 15
#define LETTERS 26


void read_word(int counts[LETTERS])
{
    char letter, word[LETTERS], *adress = &word[0];
    int i=0;
    while((letter = getchar())!= '\n')
    {
        if(&word[0] < adress + SIZE) //only in array
            word[i] = tolower(letter);
        i++;
    }
    word[i] = '\n';

    i = 0;
    while(word[i] != '\n')
    {
        if(isalpha(word[i]))
            counts[word[i] - 'a']++;
        i++;
    }
}

_Bool equal_array(int counts1[LETTERS], int counts2[LETTERS])
{
    _Bool anagrams;

    for(int i=0; i < LETTERS; i++)
    {
        if(counts1[i] == counts2[i])
            anagrams = true;
        else
        {
            anagrams = false;
            break;
        }
    }
    return anagrams;
}

int main(void)
{
    int counts1[LETTERS] = {0}, counts2[LETTERS] = {0};

    printf("Enter first word: ");
    read_word(counts1);
    printf("Enter second word: ");
    read_word(counts2);

    (equal_array(counts1, counts2)) ? printf("The words are anagrams.\n") : printf("The words are not anagrams.\n");

    return 0;
}

