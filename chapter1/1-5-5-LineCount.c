#include <stdio.h>

//Count input values such as new lines, blank spaces and tabs.

void main()
{
    int c, newLine, blankSpace, tab; //Variables to store the string, and count the different values as new lines, blank spaces and tab presses.

    newLine = 0; //Initializing all counts to 0.
    blankSpace = 0;
    tab = 0;

    printf("Press \"Ctrl + D\" to stop the input\n"); //Hint for the user.

    while ((c = getchar()) != EOF) //Asking for the user input until the EOF.
    {
        if (c == ' ')
            ++blankSpace; //Increment the count for each blank space.
        if (c == '\t')
            ++tab; //Increment the count for each tab.
        if (c == '\n')
            ++newLine; //Increment the count for each new line.
    }

    printf("New lines:%d\n", newLine);       //Print the total new lines on the string.
    printf("Tabs:%d\n", tab);                //Print the total tabs on the string.
    printf("Blank spaces:%d\n", blankSpace); //Print the total blank spaces on the string.
}