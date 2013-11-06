#include <stdio.h>

#define FRACTION 4.0f/3.0f
#define PI 3.14159

int
main(void)
{
    float volume, radius;
    printf("Enter a radius: ");
    scanf("%f", &radius);

    volume = FRACTION * PI * radius * radius * radius;

    printf("Volume of sphere (with radius %.2f) is: %.2f", radius, volume);

    return 0;
}