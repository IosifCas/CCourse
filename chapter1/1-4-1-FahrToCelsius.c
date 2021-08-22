#include <stdio.h>

//Fahrenheit to Celsius table using constant values using the #define preprocessor instruction.

#define LOWER 0   //Define constants, declared in caps for convention. No need for the semicolon.
#define UPPER 300 //Table's endpoint.
#define STEP 20   //Value of the increment.

void main()
{
    int fahr; //Declare the variable.

    printf("|Fahr\t|Celsius|\n");                   //Print the table headers.
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP) //Using the constant values within the loop.
    {
        printf("|%3d\t|%3.1f|\n", fahr, (5.0 / 9.0) * (fahr - 32)); //Print the temperatures.
    }
}