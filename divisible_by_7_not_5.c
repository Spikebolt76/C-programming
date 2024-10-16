#include <stdio.h>

/* Print all integer greater than 100 and less than 200 that are divisible by 7 but not
divisible by 5. */

int main()
{
    printf("Numbers (100 < N < 200) that are divisible by 7 but not divisible by 5 are: \n");

    for (int i = 101; i < 200; i++)
    {
        if (i % 7 == 0 && i % 5 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}