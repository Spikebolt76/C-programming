#include <stdio.h>

#define N 7

int main()
{
    int row, col, m = 1;

    for (row = 0; row <= N; row++)
    {
        for (col = 0; col <= row; col++)
        {
            printf(" %2d ", m);
            m++;
        }
        printf("\n");
    }
    return 0;
}