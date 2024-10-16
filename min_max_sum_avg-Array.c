#include <stdio.h>

//Find Max, Min, Sum, Avg. of given numbers from an array :-

int main()
{
    int i, n;
    float sum = 0, avg = 0;

    printf("\nHow many nums do you want to input? :  ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the numbers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
        sum += arr[i];
    }
    avg = sum / n;

    printf("\nMax number = %d, Min number = %d, sum = %.2f, average = %.2f", max, min, sum, avg);
    return 0;
}