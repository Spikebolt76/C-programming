#include <stdio.h>

#define N 8

int main()
{
    int row, col, n = 1;
    char m = 'A';

    for (row = 0; row <= N; row++)
    {
        for (col = 0; col <= row; col++)
        {
            if (row % 2 == 0)
            {
                printf(" %2d ", n);
                n++;
            }
            else 
            {
                printf(" %2c ", m);
                m++;
            }
        }
        printf("\n");
    }
    return 0;
}