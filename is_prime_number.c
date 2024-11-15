/* [Square root optimization]~checks for factors of a number up to its square root,
as any factorization can be expressed as n = a * b,
with at least one factor (a or b) less than or equal to the square root of n.
If no divisors are found in this range, the number is confirmed to be prime.
This significantly improves the efficiency of the prime-checking algorithm, especially for larger numbers. */

#include <stdio.h>

int main()
{
    int num, i;
    int isPrime = 1; // Assume the number is prime initially //(flag)

    
    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle edge cases
    if (num <= 1)
    {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    }
    else
    {
        // Check for factors from 2 to the square root of num [Square root optimization]
        for (i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0; // Found a factor, not prime
                break;       // Exit the loop
            }
        }
    }

    // Output the result
    if (isPrime)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
