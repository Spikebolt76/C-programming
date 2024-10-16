#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    float sum = 0.0, arith_mean;
    float product = 1.0, geo_mean;
    float harm_sum = 0.0, harmonic_mean;

    printf("\nHow many numbers do you want to input? : ");
    scanf("%d", &n);

    printf("\nEnter the numbers: ");
    float arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);  // Use %f for float input

        sum += arr[i];

        product *= arr[i];

        harm_sum += 1.0 / arr[i];  // Ensure division is float division
    }
    arith_mean = sum / n;
    harmonic_mean = n / harm_sum;  // Calculate harmonic mean correctly
    float expnt = 1.0 / n;         // Ensure correct floating-point exponent
    geo_mean = powf(product, expnt);

    printf("\nArithmetic mean (average) = %.2f", arith_mean);
    printf("\nHarmonic mean = %.2f", harmonic_mean);
    printf("\nGeometric mean = %.2f\n", geo_mean);

    return 0;
}
