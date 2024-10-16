#include <stdio.h>

#define N 8

int main()
{
    int row, col;

    for(row = 0; row <= N; row++)
    {
        for (col = 0; col <= N; col++)
        {
            if (row == 0 || row == N || col == 0 || col == N)
            {
                printf("# ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
