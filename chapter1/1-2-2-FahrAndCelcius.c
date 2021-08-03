#include <stdio.h>

/*Fahrenheit and Celcius table using floating-point values*/

void main()
{
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;   /*startpoint of the table*/
    upper = 300; /*endpoint of the table*/
    step = 20;   /*value of the increment*/

    fahr = lower;
    printf("|Fahr|Celcius|\n");
    while (fahr <= upper)
    {
        celcius = (5.0 / 9.0) * (fahr - 32);
        printf("|%3.0f|%6.1f|\n", fahr, celcius);
        fahr = fahr + step;
    }
}