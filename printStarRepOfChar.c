/* Print star(*) representation of character 'J' using while loop.
   You an use if else, nested while but can't use multiple (*)s and can't spam \n or \t */

#include <stdio.h>

int main()
{
    int row = 0;

    printf("\n ");

    while (row < 6)
    {
        int col = 0;
        while (col < 7)
        {
            if (row == 0)
            {
                printf("* ");
            }
            else if ((row == 1 || row == 2 || row == 3) && col == 3)
            {
                printf("* ");
            }
            else if (row == 4 && (col == 0 || col == 3))
            {
                printf("* ");
            }
            else if (row == 5 && col <= 3)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            col++;
        }
        printf("\n ");
        row++;
    }
    return 0;
}