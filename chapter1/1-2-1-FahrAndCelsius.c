#include <stdio.h>

//Fahrenheit to Celsius table.

void main()
{
    int fahr, celsius;      //Variables to store the temperatures.
    int lower, upper, step; //Start and endpoint of the loop, as well as the increment to go from the startpoint to the endpoint.

    lower = 0;   //Assign the startpoint.
    upper = 300; //Assign the endpoint.
    step = 20;   //Assing the increment.

    fahr = lower;                 //Setting the variable equal to the startpoint.
    printf("|Fahr\t|celsius|\n"); //Print the header of the table.
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;          //Since fahr and celsius were declared as integers, we cannot divide 5 by 9. The structure of this formula changes once we use floating point variables.
        printf("|%d\t|%d\t|\n", fahr, celsius); //print the temperature values.
        fahr = fahr + step;                     //Simple way to increase the current value of the fahr variable plus the step, and assign it to the fahr variable.
    }
}