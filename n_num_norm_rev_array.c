#include <stdio.h>

int main()
{
    int n, i;

    printf("\nHow many numbers do you want to input? : ");
    scanf("%d", &n);

    int num[n];

    printf("\nEnter the numbers: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("\nNumbers in normal order: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }

    printf("\nNumbers in reverse order: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
