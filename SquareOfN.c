#include <stdio.h>

int main()
{
    int I, result, N;
    I = 1, result = 0;

    printf("Input N: ");
    scanf("%d", &N);

    while (I <= N)
    {
        result = result + N;
        I = I + 1;
    }

    printf("Square of %d is: %d", N, result);

    return 0;
}