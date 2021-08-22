#include <stdio.h>

//Character count using for.

void main()
{
    double nc;                           //Variable declared using a double precision type.
    for (nc = 0; getchar() != EOF; ++nc) //Assing a value to the nc variable, ask for input and set the condition, and increment the nc variable by 1 for each character on the string.
        ;
    printf("%.0f\n", nc); //Print the count of characters on the string.
}