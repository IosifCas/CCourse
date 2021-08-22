#include <stdio.h>

/*Input and Output*/

void main()
{
    int c; //Using int values is valid to store strings of text.

    c = getchar();   //Using the getchar() function to ask for the user input.
    while (c != EOF) //EOF => End of File. Use ctrl + D to insert the EOF.
    {
        putchar(c);    //The putchar() function prints the stored string in the c variable.
        c = getchar(); //Using the getchar() function to ask for the user input.
    }
}