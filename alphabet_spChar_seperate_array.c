#include <stdio.h>

int main()
{
    char org[100];
    int i, j = 0, k = 0;

    printf("Enter the mixed string [alphabets and special characters]: \n");
    gets(org);

    char alphbt[100], otherchar[100];

    for (i = 0; org[i] != '\0'; i++)
    {
        // Using parentheses to ensure correct condition evaluation
        if ((org[i] >= 'a' && org[i] <= 'z') || (org[i] >= 'A' && org[i] <= 'Z'))
        {
            alphbt[j] = org[i];
            j++;
        }
        else 
        {
            otherchar[k] = org[i];
            k++;
        }
    }
    alphbt[j] = '\0';
    otherchar[k] = '\0';

    printf("\nAlphabets: ");
    puts(alphbt);
    printf("\nSpecial Characters: ");
    puts(otherchar);

    return 0;
}
