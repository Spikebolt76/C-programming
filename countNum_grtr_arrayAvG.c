#include <stdio.h>

// Count numbers higher than the average of an array. :-

int main()
{
    int n, i, count = 0;
    float sum = 0.0, average;

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = sum / n;

    for (i = 0; i < n; i++)
    {
        if (arr[i] > average)
        {
            count++;
        }
    }
    printf("Average: %.2f\n", average);
    printf("Count of numbers higher than the average: %d\n", count);

    return 0;
}