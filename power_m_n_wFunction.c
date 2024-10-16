#include <stdio.h>

int power(int base, int n)
{
    int i, p;
    p = 1;

    for (i = 1; i <= n; i++)
    {
        p = p * base;
    }
    return p;
}

int main()
{
    int num, pow;

    printf("\nEnter a number: ");
    scanf("%d", &num);
    printf("\nEnter it's power: ");
    scanf("%d", &pow);

    printf("%d raise to %d = %d", num, pow, power(num, pow));
    return 0;
}