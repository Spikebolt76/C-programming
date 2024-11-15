#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome

int isPalindrome(char str[])
{
    int length = strlen(str);
    int start = 0, end = length - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str))
    {
        printf("The string '%s' is a palindrome.\n", str);
    }
    else
    {
        printf("The string '%s' is not a palindrome.\n", str);
    }

    return 0;
}
