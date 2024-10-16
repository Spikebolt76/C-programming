#include <stdio.h>

#define N 6
#define M 1

int main()
{
    int row , col, m = M;

    for (row = 0; row <= N; row++)
    {
        for (col = 0; col <= row; col++)
        {
            printf(" %d ", m);
        }
        printf("\n");
        m++;
    }
    return 0;
}