#include <stdio.h>
//Find two largest elements in a one dimensional array.

//[thoroughly Optimized, using single for loop]:-

int main() {
    int i, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must contain at least two elements.\n");
        return 1;
    }

    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max1, max2;
    
    // Initialize max1 and max2 based on the first two elements
    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    // Loop through the rest of the array starting from index 2
    for (i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("Largest element in the array: %d\n", max1);
    printf("Second largest element in the array: %d\n", max2);

    return 0;
}
