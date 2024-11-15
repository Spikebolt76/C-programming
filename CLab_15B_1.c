#include <stdio.h>

// Delete all duplicate elements from an array :-

int main()
{
    int i, j = 0, k, n = 6;
    int arr[n];

    printf("\nEnter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                i--;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
//This one's better: 

// #include <stdio.h>

// int main()
// {
//     int i, j, n;

//     // Input size of the array
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];

//     // Input elements
//     printf("\nEnter elements: ");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     // Logic to remove duplicates
//     int newSize = 0;  // Track the size of the array after duplicates are removed
//     for (i = 0; i < n; i++)
//     {
//         // Check if arr[i] is already in the "unique" part of the array
//         for (j = 0; j < newSize; j++)
//         {
//             if (arr[i] == arr[j])
//                 break;  // If duplicate is found, break and skip adding it
//         }

//         // If arr[i] was not found in the previous part of the array
//         if (j == newSize)
//         {
//             arr[newSize] = arr[i];  // Place the unique element in the next spot
//             newSize++;
//         }
//     }

//     // Output the modified array after removing duplicates
//     printf("\nArray after removing duplicates: ");
//     for (i = 0; i < newSize; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


//HIGHLY OPTIMIZED VERSION :-

// #include <stdio.h>

// #define MAX_VAL 100 // Assuming array values will be less than 100

// int main()
// {
//     int i, j = 0, n = 20;
//     int arr[n];
//     int hash[MAX_VAL] = {0};  // Hash array to track occurrences of elements

//     // Input elements
//     printf("\nEnter elements: ");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     // Logic to remove duplicates
//     for (i = 0; i < n; i++)
//     {
//         if (hash[arr[i]] == 0)  // If the element is not seen before
//         {
//             hash[arr[i]] = 1;   // Mark the element as seen
//             arr[j++] = arr[i];  // Move it to the front part of the array
//         }
//     }

//     // Print the array after removing duplicates
//     printf("\nArray after removing duplicates: ");
//     for (i = 0; i < j; i++)  // 'j' holds the size of the new array
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
