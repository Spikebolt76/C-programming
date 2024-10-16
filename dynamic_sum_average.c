#include <stdio.h>

int main()
{
    int num;
    float sum;
    float average;
    int count = 0;

    printf("\nEnter numbers to sum and average (press Ctrl+Z to finish): ");

    while (scanf("%d", &num) != EOF)
    {
        sum += num;
        count++;
    }

    if (count > 0)
    {
        average = sum / count;
        printf("\nSum: %.2f", sum);
        printf("\nAverage: %.2f", average);
    } else{
        printf("\nNo numbers were entered by the user.");
    }

    return 0;
}