#include <stdio.h>

// Store n elements in an array and print the elements using pointer :

int main()
{
    int n;
    printf("\nEnter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n], i;
    int *ptr = arr;
    printf("\nEnter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);        //pointer arithmetic (?)
    }

    printf("The elements in the array are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i)); // Dereferencing the pointer to get the values
    }
    return 0;
}