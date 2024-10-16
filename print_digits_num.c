#include <stdio.h>
#include <math.h>

int main()
{
    int num, digit;
    int reverseNum = 0;

    printf("\nEnter the Number: ");
    scanf("%d", &num);

    num = (int)fabs(num); // The fabs function returns a double, which is a floating-point type, so we typecast it to integer type.
    // OR just do this: if (num < 0) {num = -num;}

    printf("\nThe digits of the number are as follows: ");

    while (num > 0)
    {
        digit = num % 10;
        reverseNum = reverseNum * 10 + digit;
        num /= 10;
    }

    while (reverseNum > 0) 
    {
        printf("\n%d", reverseNum % 10); 
        reverseNum /= 10; 
    }
    printf("\n"); 
    return 0;
}