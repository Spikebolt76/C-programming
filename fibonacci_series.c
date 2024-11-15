#include <stdio.h>

int main()
{
    int n, i;
    long long first = 0, second = 1, next;

    printf("\nEnter the number of terms in Fibonacci Series: ");
    scanf("%d", &n);

    printf("\n|| FIBONACCI SERIES ||\n");

    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%lld, ", first);
            continue;
        }
        if (i == 1)
        {
            printf("%lld, ", second);
        }

        next = first + second;
        printf("%lld ", next);

        first = second; // update the first and second predecessors
        second = next;

        if (i < n - 1)
        {
            printf(",");
        }
    }
    return 0;
}