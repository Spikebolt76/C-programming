//Check whether character is an alphabet or not using conditional operator.

#include <stdio.h>

int main()
{
    char character;

    printf("\nEnter a character: ");
    scanf("%c", &character);

    (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z') ? printf("Input char: %c is an alphabet.\n", character) : printf("Input char %c is NOT an alphabet.\n", character);

    return 0;
}