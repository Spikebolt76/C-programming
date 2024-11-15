#include <stdio.h>

// Pass an array in function to print array elements :-

void printArray(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("\nElements of the given array: ");
    printArray(arr, n);

    return 0;
}