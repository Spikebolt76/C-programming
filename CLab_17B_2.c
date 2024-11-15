#include <stdio.h>

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size = 5;

    printf("Original Arrays:\n");
    printf("arr1: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\narr2: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr2[i]);
    }

    for (int i = 0; i < size; i++)
    {
        int temp = *(arr1 + i);    
        *(arr1 + i) = *(arr2 + i); 
        *(arr2 + i) = temp;        
    }

    printf("\n\nArrays After Swapping:\n");
    printf("arr1: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\narr2: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
