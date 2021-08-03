#include <stdio.h>

// print Fahrenheit-Celcius table

void main()
{
    int fahr, celcius;
    int lower, upper, step;

    lower = 0;   /*startpoint of the table*/
    upper = 300; /*endpoint of the table*/
    step = 20;   /*value of the increment*/

    fahr = lower;
    printf("|Fahr\t|Celcius|\n");
    while (fahr <= upper)
    {
        celcius = 5 * (fahr - 32) / 9;
        printf("|%d\t|%d\t|\n", fahr, celcius);
        fahr = fahr + step;
    }
}