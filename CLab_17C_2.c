#include <stdio.h>
#include <stdbool.h>

// Sort array using pointers (OPTIMIZED BUBBLE SORT - using a flag) :

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int *arr, int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n -1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped by inner loop, then break
        if (swapped == false)
            break;
    }
}

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
    int n, i;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the numbers: ");

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}