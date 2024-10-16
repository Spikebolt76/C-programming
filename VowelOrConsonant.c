#include <stdio.h>

void main()
{
    char ch;

    printf("Enter the alphabet: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Given Alphabet is Vowel.");
    }
    else
    {
        printf("Given Alphabet is Consonant.");
    }
}