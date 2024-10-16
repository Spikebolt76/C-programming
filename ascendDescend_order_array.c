#include <stdio.h>

// Bubble Sort Algorithm :

int main()
{
    int i, j, n, temp;

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the numbers: ");

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (j = 0; j < n - 1; j++)
    {
        for (i = 0; i < n - j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("\nNumber of array in Ascending order: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}