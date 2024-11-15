#include <stdio.h>

// Add two matrix using pointers :

int main()
{
    int m = 3, n = 3;   // order/ row-columns of the matrices
    int i, j;           // iterators for rows and columns
    int matrix1[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int matrix2[3][3] = {{1, 0, 1},{0, 1, 0},{1, 0, 1}};
    int matrixA[3][3];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            *(*(matrixA + i) + j) = *(*(matrix1 + i) + j) + *(*(matrix2 + i) + j);
        }
    }
    printf("addition of matrix1 and matrix2 : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%2d ", *(*(matrixA + i) + j));      
        }
        printf("\n");
    }

    return 0;
}