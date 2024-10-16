#include <stdio.h>

// Print first 50 numbers in series 1, 4, 7, 10… :-

#define COM_DIFF 3

int main()
{
    int count, term = 1;

    printf("The First 50 terms of the series 1, 4, 7, 10... are: \n");

    for (count = 1; count <= 50; count++)
    {
        printf(" %d ", term);
        term += COM_DIFF;
    }
    return 0;
}