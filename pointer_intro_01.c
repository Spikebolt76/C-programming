#include <stdio.h>

int main()
{
    int a[] = {1, 11, 23, 34, 56, 78};
    int *ptr, i, sum = 0;
    ptr = a;

    for (i = 0; i < 6; i++)
    {
        sum += *(ptr + i);
    }
    printf("sum = %d ", sum);
    return 0;
}