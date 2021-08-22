#include <stdio.h>

//Fahrenheit to celsius table form greater to smallest

void main()
{
    int fahr; //Declaring the fahr variable to store the temperature value.

    printf("|Fahr|Celsius|\n");             //Print the table header.
    for (fahr = 300; fahr >= 0; fahr -= 20) //This loop sets the startpoint at 300, decreasing the value on each iteration, and stops once it reaches 0 or less.
    {
        printf("|%3d|%3.1f|\n", fahr, (5.0 / 9.0) * (fahr - 32)); //Print the temperature values.
    }
}