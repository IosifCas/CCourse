#include <stdio.h>

/*Count input values such as new lines, blank spaces and tabs*/

void main()
{
    int c, newLine, blankSpace, tab;

    newLine = 0;
    blankSpace = 0;
    tab = 0;

    printf("Press \"Ctrl + D\" to stop the input\n");

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++blankSpace;
        if (c == '\t')
            ++tab;
        if (c == '\n')
            ++newLine;
    }

    printf("New lines:%d\n", newLine);
    printf("Tabs:%d\n", tab);
    printf("Blank spaces:%d\n", blankSpace);
}