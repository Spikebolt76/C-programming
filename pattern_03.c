#include <stdio.h>

int main()
{
    int row, col, prN = 1;

    for(row = 0; row <= 6; row++)
    {
        for(col = 0; col <= row; col++)
        {
            printf("%02d ", prN);
            prN++;                          //move (prN++;) from here to just after 2nd for loop form different pattern
        }
        printf("\n");
    }
}