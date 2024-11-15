#include <stdio.h>

/* Given an integer array nums sorted in non-decreasing order, remove the duplicates inplace
such that each unique element appears only once. The relative order of the elements
should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do
the following things:

Change the array nums such that the first k elements of nums contain the unique elements
in the order they were present in nums initially. The remaining elements of nums are not
important as well as the size of nums.

Return k. */

#include <stdio.h>

int main() {
    // Array with integers in non-decreasing order:
    int arr[15] = {12, 12, 24, 45, 45, 45, 46, 57, 58, 63, 63, 65, 68, 68, 70};
    int i, j;
    int n = 15;  // Length of the array

    for (i = 0; i < n - 1; i++) {
        // Check for duplicates
        if (arr[i] == arr[i + 1]) {
            // Shift elements to the left to remove the duplicate
            for (j = i + 1; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            // Decrease the size of the array since we removed a duplicate
            n--; 
            // Stay on the same index for the next iteration to check the new element
            i--; // Go back to the current index to check again
        }
    }

    // Print the unique elements in the array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nNumber of unique elements: %d\n", n);

    return 0;
}
