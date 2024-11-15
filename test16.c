#include <stdio.h>

//reverse array using function and pointer C program  {UNOPTIMIZED}
void reverseArray(int *ptr, int n);

int main()
{
    int n;    //size of array
    printf("Enter size of the array: \n");
    scanf("%d", &n);
    int arr[n], i;

    printf("Enter array elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Origianl Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    reverseArray(arr, n);

    return 0;
}

void reverseArray(int *ptr, int n)
{
    int i;
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", *(ptr + i));
    }
}
