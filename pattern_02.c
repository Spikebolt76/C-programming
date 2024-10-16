#include <stdio.h>

#define LIMIT 6

int main()
{
    int row, col;

    for(row = 0; row <= LIMIT; row++)
    {
        for(col = LIMIT; col >= row; col--)
        {
            printf("$ ");
        }
        printf("\n");
    }
    return 0;
    
}