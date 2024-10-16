#include <stdio.h>

int main()
{
    int row, col;

    for(row = 0; row <= 6; row++)
    {
        for(col = 0; col <= row; col++)
        {
            printf("Oi ");
        }
        printf("\n");
    }
    return 0;
}

//Another logic: {tbh this one SUCKS}

// #include <stdio.h>

// int main()
// {
//     int row, col;
    
//     for(row = 6; row >= 0; row--) // Start from 6 and go down to 0
//     {
//         for(col = 6 - row; col >= 0; col--) // Adjust columns based on row value
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }