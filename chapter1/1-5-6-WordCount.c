#include <stdio.h>

#define IN 1
#define OUT 0

/*Count the lines, words and characters from the input*/
void main()
{
    int c, newLine, newWord, newChar, state;

    state = OUT;
    newLine = newWord = newChar = 0;

    while ((c = getchar()) != EOF)
    {
        ++newChar;
        if (c == '\n')
            ++newLine;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++newWord;
        }
    }

    printf("Lines:%d\nWords:%d\nCharacters:%d\n", newLine, newWord, newChar);
}