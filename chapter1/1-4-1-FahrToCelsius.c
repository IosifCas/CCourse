#include <stdio.h>

/*Fahrenheit to Celcius table using */

#define LOWER 0   /*Table's startpoint*/
#define UPPER 300 /*Table's endpoint*/
#define STEP 20   /*Value of the increment*/

void main()
{
    int fahr;

    printf("|Fahr\t|Celsius|\n");
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        printf("|%3d\t|%3.1f|\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}