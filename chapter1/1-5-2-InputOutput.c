#include <stdio.h>

/*Read and print characters*/

void main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
}