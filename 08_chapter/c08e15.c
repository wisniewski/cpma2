#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 15
#define LETTERS 26

void read_word(char w[])
{
    char letter, *adress = w;
    while((letter = getchar())!= '\n')
    {
        if(w < adress + SIZE) //only in array
            *w++ = tolower(letter);
    }
    *w = '\n';
}

void print_word(char w[])
{
    int i=0;
    while(w[i] != '\n')
        printf("%c", w[i++]);
    printf("\n");
}

_Bool is_anagram(char w1[], char w2[])
{
    _Bool anagrams;
    int anagrams_w1[LETTERS] = {0}, anagrams_w2[LETTERS] = {0};
    int i = 0;
     while(w1[i] != '\n')
    {
        if(isalpha(w1[i]))
            anagrams_w1[w1[i] - 'a']++;
        i++;
    }
    i=0;
    while(w2[i] != '\n')
    {
        if(isalpha(w2[i]))
            anagrams_w2[w2[i] - 'a']++;
        i++;
    }

    for(int i=0; i < LETTERS; i++)
    {
        if(anagrams_w1[i] == anagrams_w2[i])
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
    char word1[SIZE], word2[SIZE];

    printf("Enter first word: ");
    read_word(word1);
    printf("Enter second word: ");
    read_word(word2);

    (is_anagram(word1, word2)) ? printf("The words are anagrams.\n") : printf("The words are not anagrams.\n");

    return 0;
}

