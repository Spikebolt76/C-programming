#include <stdio.h>

int main()
{
    int num, exp, result = 1, i, temp;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    for (exp = 1; exp <= num; exp++)
    {
        temp = 0;
        for (i = 1; i <= result; i++)
        {
            temp += num;
        }
        result = temp;
    }
    printf("%d raised to %d is: %d\n", num, num, result);
    return 0;
}