/* Print ISBN subnumbers */

#include <stdio.h>

int main(void)
{
    unsigned int gsi, group, code, number, check_out;

    printf("Enter ISBN (GSI-GROUP-CODE-NUMBER-CHECK OUT): ");
    scanf("%u-%u-%u-%u-%u", &gsi, &group, &code, &number, &check_out);
    printf("GSI : %u\n", gsi);
    printf("Group : %u\n", group);
    printf("Code : %u\n", code);
    printf("Number : %u\n", number);
    printf("Check out : %u\n", check_out);

    return 0;
}