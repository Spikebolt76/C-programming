#include <stdio.h>

//Count number of elements divisible by 3 in array.

int main()
{
    int i, n, count = 0;

    printf("\nEnter number or elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the numbers: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 3 == 0)
            count ++;
    }
    printf("\nNumber of elements divisible by 3 in array are: %d", count);
    return 0;
}