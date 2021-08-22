#include <stdio.h>

/*Convert Celsius to Fahrenheit*/

void main()
{
    float celsius, fahr;    //Variables that will store the temperature values.
    int lower, upper, step; //Variables that will determine the starting and ending points, and the increment to change celsius' value on each iteration.

    lower = 0;   /*Table's startpoint*/
    upper = 100; /*Table's endpoint*/
    step = 5;    /*Value of the increment*/

    celsius = lower;            //Setting the celsius variable equal to the startpoint before entering the loop.
    printf("|celsius|Fahr|\n"); //Print the headers of the table to be printed within the loop.
    while (celsius <= upper)
    {
        fahr = (celsius * 9 / 5) + 32;              //note that we are using floating values, hence the division between numbers 9 and 5 will result in floating point numbers.
        printf("|%3.0f\t|%3.1f|\n", celsius, fahr); //print the values.
        celsius += step;                            //increase celsius' value before starting the next iteration.
    }
}