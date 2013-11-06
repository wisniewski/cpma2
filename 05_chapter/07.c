#include <stdio.h>

int
main(void)
{
    int num1, num2, num3, num4, maximum1, maximum2, minimum1, minimum2;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if(num1 > num2)
        {
            maximum1 = num1;
            minimum1 = num2;
        }
    else
    {
        maximum1 = num2;
        minimum1 = num1;
    }

     if(num3 > num4)
        {
            maximum2 = num3;
            minimum2 = num4;
        }
    else
    {
        maximum2 = num3;
        minimum2 = num4;
    }

    if(maximum1 > maximum2)
        printf("Max: %d\n", maximum1);
    else
        printf("Max: %d\n", maximum2);

    if(minimum1 < minimum2)
        printf("Min: %d\n", minimum1);
    else
        printf("Min: %d\n", minimum2);


    return 0;
}