#include <stdio.h>

//Get 10 numbers from user print count of odd, even numbers :-

#include <stdio.h>

int main() 
{
    int num, i, evenCount = 0, oddCount = 0;

    printf("Enter 10 numbers: ");

    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &num);
        
        if (num % 2 == 0) 
        {
            evenCount++;
        } 
        else 
        {
            oddCount++;
        }
    }
    printf("Even numbers count: %d\n", evenCount);
    printf("Odd numbers count: %d\n", oddCount);

    return 0;
}


/* # ADVANCED METHOD # */

// int main() 
// {
//     int numbers[10], i;
//     int evenCount = 0, oddCount = 0;

//     // Get 10 numbers from user
//     printf("Enter 10 numbers:\n");

//     for (i = 0; i < 10; i++) 
//     {
//         scanf("%d", &numbers[i]);
//     }

//     // Count odd and even numbers
//     for (i = 0; i < 10; i++) 
//     {
//         if (numbers[i] % 2 == 0) 
//         {
//             evenCount++;
//         } 
//         else 
//         {
//             oddCount++;
//         }
//     }

//     // Print the count of odd and even numbers
//     printf("Even numbers count: %d\n", evenCount);
//     printf("Odd numbers count: %d\n", oddCount);

//     return 0;
// }
