#include <stdio.h>
#include <string,h>

int main()
{
    char str1[10], str2[10];
    int i = 0, result = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    if (strlen(str1) == strlen(str2))
    {
    for (i = 0; str1[i] == str2[i]; i++)
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
    }
    }

    if (flag == 1)
    {
        printf("\nBoth strings are not equal. ");
    }
    else{
        printf("\nStrings are the same.");
    }
    return 0;
}