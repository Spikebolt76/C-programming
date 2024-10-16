#include <stdio.h>

#define T_ROWS 6

int main()
{
    int i = 0, j = 0, k = 0;

    for (i = 1; i <= T_ROWS; i++)
    {
        for (k = 1; k < i; k++)
        {
            printf("  ");
        }

        for (j = 1; j <= (T_ROWS - i + 1); j++)
        {
            printf("# ");
        }
        printf("\n");
    }
    return 0;
}
/* * * * * * 
   * * * * *
     * * * * 
       * * *
         * * 
           * */