#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char letter, tab[15];
    int i=0;

    printf("Enter a phone number: ");

    while (((letter = getchar()) != '\n') && (i < 15))
    {
        switch(letter = toupper(letter))
        {
        case 'A' : ;
        case 'B' : ;
        case 'C' : tab[i] = '2'; break;

        case 'D' : ;
        case 'E' : ;
        case 'F' : tab[i] = '3'; break;

        case 'G' : ;
        case 'H' : ;
        case 'I' : tab[i] = '4'; break;

        case 'J' : ;
        case 'K' : ;
        case 'L' : tab[i] = '5'; break;

        case 'M' : ;
        case 'N' : ;
        case 'O' : tab[i] = '6'; break;

        case 'P' : ;
        case 'Q' : ;
        case 'R' : ;
        case 'S' : tab[i] = '7'; break;

        case 'T' : ;
        case 'U' : ;
        case 'V' : tab[i] = '8'; break;

        case 'W' : ;
        case 'X' : ;
        case 'Y' : ;
        case 'Z' : tab[i] = '9'; break;

        default: tab[i] = letter; break;
        }
    i++;
    }
    printf("Digits instead of letters: ");
    for(int j = 0; j < i; j++)
        printf("%c", tab[j]);

    return 0;
}

