#include<stdio.h>

int main()
{
    int num, count, result = 1;

    printf("\nEnter the number: ");
    scanf("%d", &num);

    for (count = 1; count <= num; count++)
    {
        result *= count;
    }
    printf("\n%d factorial = %d", num, result);

    return 0;
}

