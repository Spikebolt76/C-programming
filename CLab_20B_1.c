#include <stdio.h>

void copy(char *src, char *dst)
{
    while (*src != '\0')
    {
        *dst = *src;
        src++;
        dst++;
    }
    *dst = '\0';
}

int main()
{
    char str1[100], str2[100];

    printf("Enter a string: ");
    scanf("%[^\n]%*c", str1);

    copy(str1, str2);

    printf("Copied string: %s\n", str2);

    return 0;
}
