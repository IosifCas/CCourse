#include <stdio.h>

//Counting characters.

void main()
{
    long nc = 0; //long type can store more data than the int type.

    while (getchar() != EOF) //Ask for user input until the EOF without storing it on a variable.
        ++nc;                //Increments the character count by 1 for each character on the string.
    printf("%ld\n", nc);     //Print the count of characters on the string.
}