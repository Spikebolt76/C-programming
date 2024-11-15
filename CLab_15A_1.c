#include <stdio.h>

int main()
{
    int i;
    int arr1[10], arr2[10];

    printf("\nEnter numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < 10; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("Elements of the destination array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}