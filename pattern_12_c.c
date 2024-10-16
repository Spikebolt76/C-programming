#include <stdio.h>

#define N 6

int main()
{
    int row = 0, col, m;

    while (row <= N)
    {
        col = 0;
        m = N;
        while (col <= row)
        {
            printf(" %d ", m);
            m--;
            col++;
        }
        printf("\n");
        row ++;
    }
    return 0;
}