#include <stdio.h>

#define N 6

int main()
{
    int row, col;

    for (row = 1; row <= N; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf(" %d ", col);
        }
        printf("\n");
    } 
    return 0;
}