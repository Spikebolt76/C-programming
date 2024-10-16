#include <stdio.h>

// Count number of occurene of each digits, white spaces, others

int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
    {
        ndigit[i] = 0;
    }

    printf("\nEnter the text: ");

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            ++ndigit[c - '0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            ++nwhite;
        }
        else
        {
            ++nother;
        }
    }

    printf("\ndigits =");

    for (i = 0; i < 10; ++i)
    {
        printf("%d ", ndigit[i]);
    }

    printf(", white space = %d, other = %d\n", nwhite, nother);
    return 0;
}