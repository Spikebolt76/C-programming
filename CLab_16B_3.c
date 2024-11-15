#include <stdio.h>

// Read a matrix and print diagonal elements and its sum:
int main()
{
    int m, n;
    printf("\nEnter the order of the matrix: ");
    scanf("%d %d", &m, &n);

    // Check if the matrix is square
    if (m != n)
    {
        printf("Error: The matrix must be square to have a principal diagonal.\n");
        return 1; // Exit the program with an error code
    }

    int matrix[m][n];
    int i, j;
    printf("\nEnter the elements of the matrix: ");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;

    printf("\nPrincipal Diagonal elements are: ");
    for (i = 0; i < m; i++)
    {
        printf("%d ", matrix[i][i]); // Accessing diagonal element directly
        sum += matrix[i][i];
    }
    printf("\nSum of principal diagonal elements of the matrix: %d", sum);
    return 0;
}
