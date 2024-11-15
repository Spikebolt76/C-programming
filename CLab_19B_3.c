#include <stdio.h>

// Swap elements of two integer arrays using user defined function :

void swapArray(int *arr1, int *arr2, int n)
{
    int i, temp = 0;
    for(i = 0; i < n; i++)
    {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}
int main()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, arr2[10] = {21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int i;
    int size = 10;

    printf("\nArry 1 before modification: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nArry 2 before modification: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr2[i]);
    }

    swapArray(arr1, arr2, size);

    printf("\nArray 1 after swapping: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nArray 2 after swapping: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
