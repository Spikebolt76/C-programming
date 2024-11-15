#include <stdio.h>

int main()
{
    int matrix[3][3];
    int i, j;
    int positive_count = 0, negative_count = 0, zero_count = 0;

    // Input elements for the 3x3 matrix
    printf("Enter elements for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);

            // Check and count each element
            if (matrix[i][j] > 0)
            {
                positive_count++;
            }
            else if (matrix[i][j] < 0)
            {
                negative_count++;
            }
            else
            {
                zero_count++;
            }
        }
    }

    // Display the counts
    printf("\nNumber of positive elements: %d\n", positive_count);
    printf("Number of negative elements: %d\n", negative_count);
    printf("Number of zero elements: %d\n", zero_count);

    return 0;
}
