#include <stdio.h>

/*Input and Output*/

void main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}