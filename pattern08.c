#include <stdio.h>

#define T_ROWS 6

int main()
{
    int i, j, k;

    for (i = 1; i <= T_ROWS; i++)
    {
        for (k = T_ROWS; k > i; k--)
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("# ");
        }
        printf("\n");
    } 
    return 0;
}