#include <stdio.h>

#define TR 6

int main()
{
    int row, col;

    printf("\n ");

    for (row = 1; row <= TR; row++)
    {
        for (col = 1; col <= TR; col++)
        {
            if (row == 1 || row == 6)
            {
                printf("# ");
            }
            else if ((row > 1 || row < 6) && (col == 1 || col == 6))
            {
                printf("# ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n ");
    }
    return 0;
}