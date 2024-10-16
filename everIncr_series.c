#include <stdio.h>

/* Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + …+ (1+2+3+4+…. +n). */

int main()
{
    int N, i, sum = 0;

    printf("\nEnter a value for N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; ++i)
    {
        sum += i;
    }

    printf("\nthe sum of given series is: %d", sum);
    return 0;
}