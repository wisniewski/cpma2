/* Print grade */

#include <stdio.h>

int main(void)
{
    int grade;
    
    printf("Points: ");
    scanf("%d", &grade);

    if((grade < 0) || (grade > 100))
        printf("Error");
    else
    {
        switch(grade / 10)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5: puts("F"); break;
            case 6: puts("D"); break;
            case 7: puts("C"); break;
            case 8: puts("B"); break;
            case 9:
            case 10: puts("A"); break;
        }
    }

    return 0;
}
