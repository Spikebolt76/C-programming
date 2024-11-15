#include <stdio.h>

// Print Transpose of a matrix :

int main()
{
    int m, n;
    printf("Define the order (size) of a matrix: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n], transpose[n][m];
    int i, j;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}