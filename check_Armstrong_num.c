#include <stdio.h>
#include <math.h>

/* An Armstrong number (or narcissistic number) is a number that is equal to
the sum of its own digits raised to the power of the number of digits.
For example:

     153 is an Armstrong number because it has 3 digits and { 1^3 + 5^3 + 3^3 = 153 }
     9474 is also an Armstrong number because it has 4 digits and { 9^4 + 4^4 + 7^4 + 4^4 = 9474 } */

int main()
{
    int num, buffer, digit;
    int expnt = 0, result = 0; // here, number of digits will be the exponent/power

    printf("\nEnter a number: ");
    scanf("%d", &num);

    buffer = num;

    while (buffer != 0)
    {
        buffer /= 10;
        expnt++;
    }

    buffer = num;

    while (buffer != 0)
    {
        digit = buffer % 10;
        result += pow(digit, expnt);
        buffer /= 10;
    }

    if (result == num)
    {
        printf("\n%d is an armstrong number.", num);
    } else
    {
        printf("\n%d is NOT an armstrong number.", num);
    }
    return 0;
}