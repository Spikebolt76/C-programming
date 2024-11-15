#include <stdio.h>
// Reverse elements of an array without using second array:-

int main()
{
    int i, j, n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp = 0;

    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp; 
    }

    printf("\nReversed array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}