#include <stdio.h>

// Count total duplicate elements in an array :

int main()
{
    int n, i, j, arr[100], dupli_count;

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    printf("\nEnter the numbers: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int has_visited;

    for (i = 0; i < n; i++)
    {
        dupli_count = 0;
        has_visited = 0;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                has_visited = 1;
                break;
            }
        }

        if (has_visited)
            continue;

        for (j = i; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                dupli_count++;
            }
        }

        if (dupli_count > 1)
        {
            printf("\nThe number %d has been duplicated for: %d times", arr[i], dupli_count - 1);
        }
    }
    return 0;
}