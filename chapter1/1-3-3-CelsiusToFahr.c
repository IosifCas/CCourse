#include <stdio.h>

//Celsius to Fahrenheit table.

void main()
{
    int celsius; //Declare the celsius variable.

    printf("|Celsius|Fahr|\n"); //Print the table header.

    for (celsius = 0; celsius <= 100; celsius += 5) //Initialize, increment and set the end condition.
    {
        printf("|%3d\t|%3.1f|\n", celsius, ((celsius * 9.0 / 5.0) + 32)); //Print the temperatures.
    }
}