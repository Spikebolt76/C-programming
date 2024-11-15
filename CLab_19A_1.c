#include <stdio.h>

// Find factorial of a number using function and recursive function :

int fact_iterative(int n)
{
    int result = 1;
    for(int i = 1; i <= n; i++)
    {
        result *= i;
    }
        return result;
}

int fact_recursive(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else{
        return n * fact_recursive(n - 1);
    }
}

int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\n%d factorial (by iterative function) = %d", num, fact_iterative(num));
    printf("\n%d factorial (by recursive function) = %d", num, fact_recursive(num));

    return 0;
}