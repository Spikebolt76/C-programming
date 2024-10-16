#include <stdio.h>

/* Estimate the value of the mathematical constant e. (Formula: e=1+1/1!+1/2!+1/3!+1/4!…) */

int main()
{
    float term = 1.0, result = 1.0; // Start with the first term (1/0! = 1)
    int i, total_trms;
    int i_fact = 1; // 1! = 1 initially

    printf("\nNumber of terms (>= 4) for approximation: ");
    scanf("%d", &total_trms);

    for (i = 1; i <= total_trms; i++)
    {
        i_fact *= i;
        term = 1.0 / i_fact;
        result += term;
    }
    printf("\nApproximate value of e is: %.10f", result);
    return 0;
}