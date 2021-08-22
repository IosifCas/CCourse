#include <stdio.h>

//Fahrenheit to Celsius

void main()
{
    int fahr; //Declaring one fahr variable since the for loop simplifies the iteration control.

    printf("|Fahr|Celsius|\n");             //Print the header for the table.
    for (fahr = 0; fahr <= 300; fahr += 20) //The for loop requires three fields, the startpoint, the endpoind, and the increment for each iteration.
    {
        printf("|%3d|%3.1f|\n", fahr, (5.0 / 9.0) * (fahr - 32)); //We can process the formula inside the printf function each time the value is needed, thus avoiding the need to declare the Celsius variable.
    }
}