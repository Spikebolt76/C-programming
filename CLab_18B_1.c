// Generate Fibonacci series of N given number using function name fibo() :

#include <stdio.h>

void fibo(int *n)
{
    long long first = 0, second = 1, next;

    for (int i = 0; i <= *n; i++)
    {
        if (i == 0)
        {
            printf("%lld", first);
        }
        else if (i == 1)
        {
            printf(", %lld", second);
        }
        else
        {
            next = first + second;
            printf(", %lld", next);

            first = second;
            second = next;
        }
    }
}

int main()
{
    int terms;
    int *ptr = &terms;

    printf("\nEnter the number of terms in Fibonacci Series: ");
    scanf("%d", ptr);

    printf("\n|| FIBONACCI SERIES ||\n");

    fibo(ptr);

    return 0;
}