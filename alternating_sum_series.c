#include <stdio.h>

//Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n.

int main()
{
    int term, N, sum = 0;

    printf("\nEnter the last term : ");
    scanf("%d", &N);

    printf("\nThe series: ");

    for (term = 0; term <= N; term++)
    {
        if (term % 2 == 0)
        {
            sum += term;
            printf("+ %d ", term);
        }
        else 
        {
            sum -= term;
            printf("- %d ", term);
        }
    }
    printf("\nThe sum of the series: %d", sum);

    return 0;
}