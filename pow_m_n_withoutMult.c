#include <stdio.h>

int main()
{
    int num, expnt;
    printf("\nEnter a number and its power: ");
    scanf("%d %d", &num, &expnt);

    int result = 0, temp = 0, i, j;

    for (i = 1; i <= expnt; i++)
    {
        temp = 0;
        for (j = 1; j <= num; j++)
        {
            temp += num;
        }
        if (i == 1)
        {
            result = temp;
        }
        else
        {
            result += temp;
        }
    }
    printf("\n%d ^ %d = %d", num, expnt, result);
    return 0;
}