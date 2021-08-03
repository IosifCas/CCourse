#include <stdio.h>

/*Convert Celsius to Fahrenheit*/

void main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;   /*Table's startpoint*/
    upper = 100; /*Table's endpoint*/
    step = 5;    /*Value of the increment*/

    celsius = lower;
    printf("|Celcius|Fahr|\n");
    while (celsius <= upper)
    {
        fahr = (celsius * 9 / 5) + 32;
        printf("|%3.0f\t|%3.1f|\n", celsius, fahr);
        celsius += step;
    }
}