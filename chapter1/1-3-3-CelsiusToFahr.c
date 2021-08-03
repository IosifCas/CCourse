#include <stdio.h>

/*Celsius to Fahrenheit table*/

void main()
{
    int celsius;

    printf("|Celsius|Fahr|\n");

    for (celsius = 0; celsius <= 100; celsius += 5)
    {
        printf("|%3d\t|%3.1f|\n", celsius, ((celsius * 9.0 / 5.0) + 32));
    }
}