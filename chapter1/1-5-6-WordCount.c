#include <stdio.h>

#define IN 1  //Declaring the constants for the program. IN holds a value equivalent to TRUE.
#define OUT 0 //OUT holds a value equivalent to FALSE.

//Count the lines, words and characters from the input.
void main()
{
    int c, newLine, newWord, newChar, state;

    state = OUT;                     //Initialize the state value to FALSE, meaning there is no word.
    newLine = newWord = newChar = 0; //Initializing multiple variables to the same value.

    while ((c = getchar()) != EOF) //Ask for the user input.
    {
        ++newChar; //Count every character on the string.
        if (c == '\n')
            ++newLine; //Count every new line on the string.
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;       //If there is no letter i.e. blank space or new line, change the state.
        else if (state == OUT) //We enter this condition on a state change to OUT.
        {
            state = IN; //We change the value back to IN.
            ++newWord;  //We count the word.
        }
    }

    printf("Lines:%d\nWords:%d\nCharacters:%d\n", newLine, newWord, newChar); //Print the total count.
}