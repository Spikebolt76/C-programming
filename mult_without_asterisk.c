#include <stdio.h>

int main()
{
    float num1, num2, result = 0, count;

    printf("\nEnter the values of num1 and num2: ");
    scanf("%f %f", &num1, &num2);

    for (count = 1; count <= num2; count++)
    {
        result += num1;
    }
    printf("\n%.2f multiplied by %.2f is: %.2f", num1, num2, result);

    return 0;
}