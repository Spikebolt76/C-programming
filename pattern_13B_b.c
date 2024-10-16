#include <stdio.h>

#define N 7

int main()
{
    int row, col, m = 0;

    for (row = 0; row <= N; row++)
    {
        for (col = 0; col <= row; col++)
        {
            /* Or you can eliminate 'm' entireky and alternate b/w 0 and 1 by:
                        printf(" %d ", (row + col) % 2); */
            m = !m;
            printf(" %d ", m);
        }
        printf("\n");
    }
    return 0;
}