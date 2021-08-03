#include <stdio.h>

/*Table Fahrenheit to Celcius*/

void main()
{
    int fahr;

    printf("|Fahr|Celsius|\n");
    for (fahr = 0; fahr <= 300; fahr += 20)
    {
        printf("|%3d|%3.1f|\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}