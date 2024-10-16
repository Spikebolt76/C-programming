#include <stdio.h>

int main()
{
    float divisor, dividend, quotient, remainder;

    printf("\nEnter The Dividend and Divisor: ");
    scanf("%f %f", &dividend, &divisor);

    for (quotient = 0; dividend >= divisor; quotient++)
    {
        dividend = dividend - divisor;
    }
    remainder = dividend;

    printf("Quotient = %.2f , Remainder = %.2f\n", quotient, remainder);
    
    return 0;
}


/*Take two numbers input from user and perform a division operation and find out quotient
and reminder (without using / and % operator) also note that a smaller number should
divide a bigger number.*/