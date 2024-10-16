/* Check whether the entered character is upper case, lower case, digit or any special character. */

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter the Character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    { 
        printf("Entered Character is in Upper-case.\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Entered Character is in Lower-case.\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Entered Character is a digit.\n");
    }
    else 
    {
        printf("Entered Character is a specical character.\n");
    }

    return 0;
}