#include <stdio.h>

/* Problem Statement
======================================================================================//
You are given:

An array of train arrival times.
An array of train departure times.

Your task:

Find the minimum number of platforms required so that no train has to wait.

Constraints:

1) Arrival and departure times are sorted in increasing order of time for simplicity.
2) The times are given in the 24-hour format (e.g., 1230 for 12:30 PM).
3) A platform is needed only when a train arrives before another departs.
=====================================================================================/*/

int findMinimumPlatforms(int arrival[], int departure[], int n)
{
    int i = 0, j = 0, platformNeeded = 0;

    while (i < n && j < n)
    {
        if (arrival[i] <= departure[j])
        {
            platformNeeded++;
            i++;
        }
        else if (arrival[i] > departure[j])
        {
            platformNeeded--;
            j++;
        }
    }
    return platformNeeded;
}

void bubbleSort(int arr[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[i + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n;

    printf("Enter the number of trains: ");
    scanf("%d", &n);

    int arrival[n], departure[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter arrival time for train %d (in 24-hour format, e.g., 1030): ", i + 1);
        scanf("%d", &arrival[i]);
        printf("Enter departure time for train %d (in 24-hour format, e.g., 1230): ", i + 1);
        scanf("%d", &departure[i]);
    }

    bubbleSort(arrival, n);
    bubbleSort(departure, n);

    int result = findMinimumPlatforms(arrival, departure, n);

    printf("Minimum Platforms Required: %d\n", result);

    return 0;
}
