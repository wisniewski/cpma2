#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char name, surname, tab[15];
    int i=0;

    printf("Enter your name and surname: ");
    scanf(" %c", &name);

    while(getchar() != ' ') //ignore spaces
        ;

    while((surname = getchar()) != '\n')
    {
        if(surname != ' ')
            tab[i] = surname;
        i++;
    }
    i=0;
    while(isalpha(tab[i]))
        printf("%c", tab[i++]);

    printf(" %c.\n", name);

    return 0;
}

