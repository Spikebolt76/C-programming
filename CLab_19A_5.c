#include <stdio.h>

// Replace a character in given string :

void replaceChar(char *str, char toCh, char repCh)
{
    int isAvlbl = 0, i;
    
    for (i = 0; str[i] != '\0'; i++)
    {
        if (toCh == str[i])
        {
            str[i] = repCh;
            isAvlbl = 1;
        }
    }
    str[i] = '\0';
    if (!isAvlbl)
    {
        printf("\n'%c' is not available in the string!", toCh);
    }
}

int main()
{
    char str[100];
    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);

    char toChar, repChar;
    printf("\nWhat character do you want replace? : ");
    scanf(" %c", &toChar);
    printf("\nWith what character? : ");
    scanf(" %c", &repChar);                     // leaving space before character specifier because of minute error

    replaceChar(str, toChar, repChar);

    printf("\nModified string: %s", str);  // Print the modified string
    
    return 0;
}