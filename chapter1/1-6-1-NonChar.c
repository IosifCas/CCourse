#include <stdio.h>

//Count the numbers on a string.

void main()
{
    int c, i, nwhite, nother; //Variables to store the string, to iterate and to count white spaces and non-numeric characters.
    int ndigit[10];           //Array to hold the count of numbers from 0 - 9.

    nwhite = nother = 0;     //Assign the same value to multiple variables.
    for (i = 0; i < 10; ++i) //Loop to fill the array with the numbers from 0 - 9.
        ndigit[i] = 0;
    while ((c = getchar()) != EOF) //Ask for the user input.
    {
        if (c >= '0' && c <= '9') //Find numbers on the string.
            ++ndigit[c - '0'];    //Increase the count of the corresponding number.
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite; //Count anything like a blank space.
        else
            ++nother; //Count any letter on the string.
    }
    printf("Digits:"); //Print the table header.
    for (i = 0; i < 10; ++i)
        printf("%d", ndigit[i]);                                //Print the array of times a number was found within the string.
    printf(", White spaces: %d, Others: %d\n", nwhite, nother); //Print the count of non-numeric characters.
}