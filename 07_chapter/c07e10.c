#include <stdio.h>

int
main(void)
{
    char name, surname;
    printf("Enter your name and surname: ");
    scanf(" %c", &name);

    while(getchar() != ' ') //ignore spaces
        ;

    while((surname = getchar()) != '\n')
    {
        if(surname != ' ')
            printf("%c", surname);
    }
    printf(" %c.\n", name);

    return 0;
}

