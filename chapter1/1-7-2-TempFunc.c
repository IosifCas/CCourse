#include <stdio.h>

#define LOWER 0 //Declaring the constants.
#define UPPER 300
#define STEP 20

float fahrToCel(int f); //Temperature conversion function prototype.

void main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("|%3d\t|%3.1f|\n", fahr, fahrToCel(fahr)); //Calling the temperature conversion function inside the printf() function.
}

float fahrToCel(int fahr)
{
    float celsius; //Variable with a scope limited to the temperature conversion function.

    celsius = (5.0 / 9.0) * (fahr - 32); //Calculating the temperature.

    return celsius; //Returning the value to the caller.
}