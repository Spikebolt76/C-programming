#include <stdio.h>
#include <string.h>

// Using a String pointer remove spaces and special characters from string :

void removeSpace_Spchar(char *str)
{
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= '0' && str[i] <= '9'))
        {
            // If valid, move it to the next available position
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main()
{
    char str[100];
    printf("\nEnter a string: ");
    scanf("%[^\n]s", str);

    removeSpace_Spchar(str);

    printf("\nString after modifications: %s", str);

    return 0;
}