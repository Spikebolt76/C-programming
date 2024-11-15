#include <stdio.h>

int main()
{
    int arr[100] = {1, 3, 5, 7, 9, 11, 13, 15}; // Sorted array
    int n = 8;                                  // Current number of elements in the array
    int value;

    printf("\nEnter a new value to insert: ");
    scanf("%d", &value);

    int position = n; // Default position is at the end if `value` is the largest

    // Find the insertion point
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > value)
        {
            position = i;
            break;
        }
    }

    // Shift elements to the right to make room for the new value
    for (int i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = value; // Insert the new value
    n++;                   // Increase the count of elements

    // Print the updated array
    printf("Updated array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//advanced method:-

// #include <stdio.h>

// void insertInSortedArray(int arr[], int n, int value) {
//     int i;

//     // Find the position to insert the new value
//     for (i = n - 1; (i >= 0 && arr[i] > value); i--) {
//         arr[i + 1] = arr[i]; // Shift elements to the right
//     }
//     arr[i + 1] = value; // Insert the new value
// }

// int main() {
//     int arr[100] = {1, 3, 5, 7, 9}; // Example sorted array
//     int n = 5; // Current number of elements
//     int value;

//     printf("Enter a value to insert: ");
//     scanf("%d", &value);

//     insertInSortedArray(arr, n, value);
    
//     printf("Array after insertion: ");
//     for (int i = 0; i <= n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
