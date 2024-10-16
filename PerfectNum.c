#include <stdio.h>

int main()
{
    int num, count;
    int sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    for (count = 1; count < num; count++)    //count== 0 would result in an infinite loop, thus take count == 1
    {
        if (num % count == 0)
        {
            sum += count;
        }
    }

    if (sum == num)
    {
        printf("%d is a Perfect Number.", num);
    }
    else
    {
        printf("%d is NOT a perfect number.", num);
    }
    return 0;
}