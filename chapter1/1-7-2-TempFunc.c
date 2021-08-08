#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahrToCel(int f);

void main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("|%3d\t|%3.1f|\n", fahr, fahrToCel(fahr));
}

float fahrToCel(int fahr)
{
    float celsius;

    celsius = (5.0 / 9.0) * (fahr - 32);

    return celsius;
}