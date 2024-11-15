#include <stdio.h>

int main()
{
    int m, n;   //m: no. of rows, n: no of columns
    printf("\nEnter number of rows and columns (m,n): ");
    scanf("%d %d", &m, &n);
    
    int matrix[m][n];
    int i, j;

    printf("Enter array elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix representation of 2D array:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}