#include <stdio.h>

#define FIRST 0
#define LAST 255

int main()
{
    int ascii = 0;

    printf("\n||    THE ASCII TABLE    ||");
    printf("\n||-----------------------||");
    printf("\n||Value\t\tCharacter||");

    for (ascii = FIRST; ascii <= LAST; ascii++)
    {
        printf("\n  %03d\t\t%c  ", ascii, ascii);
    }
    return 0;
}