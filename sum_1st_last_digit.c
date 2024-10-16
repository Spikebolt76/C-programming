#include <stdio.h>

// Find out sum of first and last digit of a given number.

int main()
{
    int number, last_dig, first_dig, sum;

    printf("\nEnter a number (<=10 digits): ");
    scanf("%d", &number);

    last_dig = number % 10;

    while (number >= 10)
    {
        number /= 10;
    }
    first_dig = number;

    sum = first_dig + last_dig;

    printf("\nSum of first and last digit: %d", sum);

    return 0;
}