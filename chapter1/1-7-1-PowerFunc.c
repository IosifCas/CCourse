#include <stdio.h>

//Using functions to calculate the power.

int power(int m, int n); //power() function prototype.

void main()
{
    int i; //Iterator variable.

    for (i = 0; i < 10; ++i)                                //Loop to get the powers from 0 - 9.
        printf("%d %d %d\n", i, power(2, i), power(-3, i)); //Calling the power() function inside the printf() function.
}

int power(int base, int n)
{
    int i, p; //Declaring the variables to be used within the power function, whose scope is limited to this function.

    p = 1; //initializing the power value.
    for (i = 1; i <= n; ++i)
        p = p * base; //Calculating the power.
    return p;         //Returning the calculated value to the function who requested the power() function.
}