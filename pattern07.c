#include <stdio.h>

void main()
{
    int n = 5, row = 0, col = 0, m = 1;
    
    for (row = 1; row <= n; row++)
    {
        if (row % 2 == 0)
            {
                m = 1;
            }
            else
            {
                m = 0;
            }
        for (col = 1; col <= row; col++)
        {
            printf("%d ", m);
            if (m == 0)
            {
                m = 1;
            }
            else{
                m = 0;
            }
        }
        printf("\n");
    }
}