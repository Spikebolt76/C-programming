#include <stdio.h>

// Find length of string using pointers : 

int main()
{
    int cap = 100;
    char str[cap];
    char *ptr = str;
    int length = 0;

    printf("\nEnter the String: ");
    gets(str);

    int i = 0;
    while (*ptr != '\0')
    {
        length ++;
        ptr++;
    }
    
    printf("\nLength of the string: %d", length);

    return 0;
}