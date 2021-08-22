#include <stdio.h>

/*Fahrenheit and celsius table using floating-point values*/

void main()
{
    float fahr, celsius;    //variables to store their respective temperature values.
    int lower, upper, step; //variables to set an upper and lower value for the loop, step indicates the distance between each iteration.

    lower = 0;   /*startpoint of the table*/
    upper = 300; /*endpoint of the table*/
    step = 20;   /*value of the increment*/

    fahr = lower; //fahr gets the same value as lower, the starting point of the loop.
    printf("|Fahr|celsius|\n");
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32);      //celsius' value is calculated.
        printf("|%3.0f|%6.1f|\n", fahr, celsius); //print the temperatures convertion table.
        fahr = fahr + step;                       //increasing the fahrenheit temperature for its next iteration.
    }
}