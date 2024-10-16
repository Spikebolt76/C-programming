#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, discriminant, x1, x2, realPart, imaginaryPart; // where x1 = first root and x2 = second root

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        // Two distinct real roots
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", x1);
        printf("Root 2 = %.2f\n", x2);
    }
    else if (discriminant == 0)
    {
        // One real root (both roots are the same)
        x1 = x2 = -b / (2 * a);
        printf("Roots are real and the same.\n");
        printf("Root 1 = Root 2 = %.2f\n", x1);
    }
    else
    {
        // Complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
    return 0;
}