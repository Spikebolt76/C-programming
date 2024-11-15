#include <stdio.h>

// Find a character from given string.

void searchChar(char *str, char ch)
{
    int found = 0, i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if (ch == str[i])
        {
            printf("\n%c found at: index %d", ch, i);
            found = 1;
        }
    }   
    if (!found)
    {
        printf("\ncharacter '%c' not found in given string.", ch);
    }
}

int main()
{
    char str[100];

    printf("\nEnter the string: ");
    gets(str);
    
    char search;
    printf("\nEnter a character to search: ");
    scanf("%c", &search);

    searchChar(str, search);

    return 0;
}