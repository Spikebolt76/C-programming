#include <stdio.h>
void main()
{
    int i, j, n = 5, m = 1;
    char ch = 'A';
    for (i = 1; i <= n; i++)
    {
        // space
        for (j = 1; j <= n - i; j++)
        {
            printf("   ");
        }
        // number or char
        for (j = 1; j <= 2 * i - 1; j++)
        {
            // for odd value of j print
            if (j % 2 == 1)
            {
                // for odd line print char
                if (i % 2 != 0)
                {
                    printf("%3c", ch);
                    ch++;
                }
                else
                { // number
                    printf("%3d", m++);
                }
            }
            else
            { // for even value of j print space
                printf("   ");
            }
        }
        printf("\n");
    }
}