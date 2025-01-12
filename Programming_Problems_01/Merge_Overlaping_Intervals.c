#include <stdio.h>

void sortArray(int m, int n, int arr[][n])
{
    int i, k;
    int temp1 = 0, temp2 = 0;

    for (k = 0; k < m - 1; k++)
    {
        for (i = 0; i < m - k - 1; i++)
        {
            if (arr[i][0] > arr[i + 1][0])
            {
                temp1 = arr[i + 1][0];
                temp2 = arr[i + 1][1];
                arr[i + 1][0] = arr[i][0];
                arr[i + 1][1] = arr[i][1];
                arr[i][0] = temp1;
                arr[i][1] = temp2;
            }
        }
    }
}

int MergeIntervals(int m, int n, int arr[][n])
{
    int index = 0, itr;          // index variable : to track the position where new merged interval should be placed 
                                 // itr variable : to iterate thru the whole 2D array
    for (itr = 1; itr < m; itr++)
    {
        if (arr[index][1] >= arr[itr][0])      // [1,3] [2,4] 
        {
            if (arr[index][1] < arr[itr][1])
            {
                arr[index][1] = arr[itr][1];
            }
        }
        else
        {
            index ++;
            arr[index][0] = arr[itr][0];
            arr[index][1] = arr[itr][1];
        }
        
    }

    return index + 1;
}

int main()
{
    int m, n = 2;
    printf("\nEnter Number of Intervals :\n");
    scanf("%d", &m);
    int interval[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &interval[i][j]);
        }
    }

    sortArray(m, n, interval);
    printf("Sorted Interval (as per their first elements) :\n");

    for (int i = 0; i < m; i++)
    {
        printf("[%d , %d] ", interval[i][0], interval[i][1]);
    }

    int index = MergeIntervals(m, n, interval);
    printf("\nMerged Intervals (result) : \n");

    for (int i = 0; i < index; i++)
    {
        printf("[%d , %d] ", interval[i][0], interval[i][1]);
    }

    return 0;
}
