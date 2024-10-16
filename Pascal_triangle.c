#include <stdio.h>

int factorial(int num) 
{
    int fact = 1;
    for (int i = 1; i <= num; i++) 
    {
        fact *= i;
    }
    return fact;
}

int combination(int n, int r)         //r = row number,  n = element index
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}


