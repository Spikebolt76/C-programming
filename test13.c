#include <stdio.h>

int main()
{
    int i;
    char str[100];
    printf("\nEnter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++){
        len++;
    }
    printf("\nLenght of String = %d", len);
}