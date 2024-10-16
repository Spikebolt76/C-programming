#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int i, j;

    for (i = 4, j = 0; i >= 0 && j < 5; i--, j++)
    {
        a[i] = a[j];
    }

    for (i = 0; i < 5; i++)
    {
        printf("\n%d ", a[i]);
    }
    
}