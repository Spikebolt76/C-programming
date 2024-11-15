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

// YOU GOTTA BE A FUCKING IDIOT IF YOU GO FOR THIS CHEAPASS LOGIC :-

// void removeSpaceAndSpecial(char *str)
// {
//     char *src = str, *dst = str;

//     while (*src != '\0')
//     {

//         if ((*src >= 'A' && *src <= 'Z') || (*src >= 'a' && *src <= 'z') || (*src >= '0' && *src <= '9'))
//         {
//             *dst = *src;
//             dst++;
//         }
//         src++;
//     }
//     *dst = '\0';
// }

// int main()
// {
//     char str[100];

//     printf("Enter a string: ");
//     gets(str);

//     removeSpaceAndSpecial(str);

//     printf("Processed string: %s\n", str);

//     return 0;
// }
