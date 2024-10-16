#include <stdio.h>

#define N 6

int main()
{
    int row, col;

    for (row = 0; row <= N; row++)
    {
        for (col = 0; col <= row; col++)
        {
            printf(" # ");
        }
        printf("\n");
    }
    return 0;
}