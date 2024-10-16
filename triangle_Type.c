#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    // Input the sides of the triangle
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if the sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Check for equilateral triangle
        if (a == b && b == c) {
            printf("The triangle is equilateral.\n");
        }
        // Check for isosceles triangle
        else if (a == b || b == c || a == c) {
            printf("The triangle is isosceles.\n");
        }
        // Check for right-angled triangle using Pythagoras theorem
        else if (fabs(a * a + b * b - c * c) < 0.0001 ||
                 fabs(a * a + c * c - b * b) < 0.0001 ||
                 fabs(b * b + c * c - a * a) < 0.0001) {
            printf("The triangle is right-angled.\n");
        }
        // If none of the above, it must be scalene
        else {
            printf("The triangle is scalene.\n");
        }
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
