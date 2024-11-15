#include <stdio.h>

// Copy one array to another using pointers :

int main()
{
    int n;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);

    int source[n], destination[n];
    int *src_ptr = source; // stores the base address of the array in the pointer variable
    int *dest_ptr = destination;

    printf("Enter %d elements for the source array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (src_ptr + i));
    }

    for (int i = 0; i < n; i++)
    {
        *(dest_ptr + i) = *(src_ptr + i);
    }

    printf("\nDestination Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", destination[i]);
    }

    return 0;
}