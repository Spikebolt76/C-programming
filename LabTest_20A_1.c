#include <stdio.h>
#include <string.h>

/* Find weather given string is palindrome or not. */

int isPalindrome(char *str)
{
    int i;
    int n = strlen(str);

    for (i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[100];
    printf("\nEnter a string: ");
    scanf("%[^\n]s", str);

    if (isPalindrome(str))
    {
        printf("\nGiven string is Palindrome.");
    }
    else
    {
        printf("\nGiven sring is NOT Palindrome.");
    }

    return 0;
}