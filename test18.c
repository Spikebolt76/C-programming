#include <stdio.h>

// take 2 nums from user, find power using recursion :

int power(int n, int p);

int main()
{
    int num, expnt;
    printf("\nEnter base (number) and power: ");
    scanf("%d %d", &num, & expnt);

    int result = power(num, expnt);

    printf("\n%d raise to %d = %d", num, expnt, result);
    return 0;
}

int power(int n, int p)
{
    if (p == 1)
    {
        return n;
    }
    else 
    {
        return n*(power(n, p - 1));
    }
}