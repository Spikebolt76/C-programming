#include <stdio.h>

//Input a string in character array and print string and length of string :-
int main()
{
    char str[100];
    printf ("\nEnter a character string: ");
    scanf ("%[^\n]", str);

    int i = 0;
    while (str[i] != '\0')
    {
        i ++;
    }
    printf("\nThe string: %s", str);
    printf("\nlength of the string: %d", i);

    return 0;
}