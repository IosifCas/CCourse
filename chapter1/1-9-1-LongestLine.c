#include <stdio.h>
#define MAXLINE 1000 //Constant for the max size of the array to hold the string.

int getLine(char line[], int maxline); //Prototype to ask for the user input.
void copy(char to[], char from[]);     //Prototype to copy the strings.

void main()
{
    int len, max;
    char line[MAXLINE], longest[MAXLINE]; //Arrays to hold the initial string and the longest string.

    max = 0;                                   //Initialize the value to 0.
    while ((len = getLine(line, MAXLINE)) > 0) //Calling the getLine() function to count the length of the string and return its value, which will be assigned to len.
        if (len > max)                         //If length is greater than the max value, it will copy such string to the longest variable.
        {
            max = len;
            copy(longest, line); //Calling the copy() function.
        }
    if (max > 0) //If there was any string, the max value will be greater than 0, which will only print the longest string.
        printf("%s", longest);
}

int getLine(char s[], int lim)
{
    int c, i; //Declaring the variable to hold the user input, and the iterator which will be returned as the length of the string.

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) //Loop will execute if the iterator is smaller that the lim, which equals the MAXLINE constant, and if there is no EOF or a new line.
        s[i] = c;                                                        //The s[] array holds the string.

    if (c == '\n') //Split the string into a new index of the array if there is a new line.
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0'; //Assing the EOF character to the position i of the array s[].
    return i;    //Return the length of the string.
}

void copy(char to[], char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0') //Copy the characters one by one from the original string (from[]) to the new one (to[]), which will hold the longest string so far, until the EOF character.
        ++i;
}