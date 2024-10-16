#include <stdio.h>

#define N 10

int main()
{
    int i, odd = 0, even = 0;
    int num[N];

    printf("\nEnter the numbers: ");

    for (i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);

        if (num[i] % 2 == 0)
        {
            even++;
        } else{
            odd++;
        }
    }
    printf("\ntotal even numbers: %d, total odd numbers: %d", even, odd);
    return 0;
}