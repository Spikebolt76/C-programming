#include <stdio.h>

//Find power of any number using recursion

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else 
    {
        return n * power(n, p - 1);
    }
}

int main()
{
    int num, expnt;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    printf("\nEnter its power: ");
    scanf("%d", &expnt);

    printf("\n%d raise to %d = %d", num, expnt, power(num, expnt)); 

    return 0;
}