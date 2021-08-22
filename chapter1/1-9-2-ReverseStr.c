#include <stdio.h>
#define MAXLEN 1000

int getLine(char line[], int maxlen);
int reverseString(char reverse[], char original[], int len);

void main()
{
    int len;
    char original[MAXLEN], reverse[MAXLEN];

    len = getLine(original, MAXLEN);

    printf("Original: %s\nReversed: %i\n", original, reverseString(reverse, original, len));
}

int getLine(char original[], int max)
{
    int c, i;

    for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        original[i] = c;

    if (c == '\n')
    {
        original[i] = c;
        ++i;
    }
    original[i] = '\0';
    return i;
}

int reverseString(char reverse[], char original[], int len)
{
    int i, j = len - 1;
    for (i = 0; i < len; ++i)
    {
        reverse[i] = original[j];
        --j;
    }

    return reverse;
}