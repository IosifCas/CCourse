#include <stdio.h>

/*Fahrenheit to Celcius table form greater to smallest*/

void main()
{
    int fahr;

    printf("|Fahr|Celsius|\n");
    for (fahr = 300; fahr >= 0; fahr -= 20)
    {
        printf("|%3d|%3.1f|\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}