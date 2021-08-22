#include <stdio.h>

//Read and print characters.

void main()
{
    int c; //Declare the variable to store the string.

    while ((c = getchar()) != EOF) //We can call and assing the value of the getchar() function within the condition of the while loop.
    {
        putchar(c); //Print the string.
    }
}