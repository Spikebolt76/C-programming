#include <stdio.h>
#define DIF 32
// Scan a character string passed as an argument and convert all lowercase string to uppercase string :

void convLowToUp(char *str)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - DIF;
        }
    }
}

int main()
{
    char str[100];
    printf("\nEnter a string: ");
    scanf("%[^\n]", str);
    
    printf("\nOriginal String: %s", str);

    convLowToUp(str);

    printf("\nString After modification: %s", str);

    return 0;
}