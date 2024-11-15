#include <stdio.h>

int factorial(int);

void main()
{
    int num, result;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    result = factorial(num);

    printf("\n%d factorial is: %d", num, result);
}

int factorial(int n)
{
    int i, result = 1;
    for (i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}