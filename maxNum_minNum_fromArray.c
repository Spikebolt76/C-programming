#include <stdio.h>

int main()
{
    int size, i;

    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    // check for valid size
    if (size <= 0)
    {
        printf("\nSize must be a positive integer.");
        return 1; // Exit the program with an error code
    }

    int arr[size]; // Declare the array with the user-defined size

    printf("\nEnter %d numbers: ", size);

    for (i = 0; i < size; i++)
    {
        printf("\nEnter a value for arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("\nMaximum number: %d", max);
    printf("\nMinimum number: %d", min);

    return 0; // Indicate successful completion
}