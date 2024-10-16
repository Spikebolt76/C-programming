#include <stdio.h>

int main()
{
    char ch;

    printf("\n||lowercase alphabets||");
    printf("\n||-------------------||\n");

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c ", ch);
    }

    printf("\n||UPPERCASE ALPHABETS||");
    printf("\n||-------------------||\n");

    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("%c ", ch);
    }
    return 0;
}