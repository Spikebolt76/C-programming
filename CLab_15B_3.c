#include <stdio.h>
// Swap first element with last, second to second last and so on :-

void swapElm (int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int i, n;
    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    swapElm(arr, n);

    printf("\nSwapped array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

