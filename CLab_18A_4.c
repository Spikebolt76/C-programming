// Return the maximum of three floating-point numbers :

#include <stdio.h>

float maximum(float x, float y, float z)
{
    float max = x > y ? (x > z ? x : z) : (y > z ? y : z);
    return max;
}

int main()
{
    float a, b, c;
    printf("\nEnter three floating point numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("\nMaximum of three: %.2f", maximum(a, b, c));
    return 0;
}