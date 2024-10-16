#include <stdio.h>

/*Amicable numbers are two different numbers where each number is the sum of the proper divisors of the other. For example:

220 and 284 are amicable because the proper divisors of 220 (1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110) 
sum to 284, and the proper divisors of 284 sum to 220. */

int main()
{
    int num1, num2, dvsr, sum1 = 0, sum2 = 0;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    for (dvsr = 1; dvsr <= num1 / 2; dvsr++)
    {
        if (num1 % dvsr == 0)
        {
            sum1 += dvsr;
        }
    }

    for (dvsr = 1; dvsr <= num2 / 2; dvsr++)
    {
        if (num2 % dvsr == 0)
        {
            sum2 += dvsr;
        }
    }

    if (sum1 == num2 && sum2 == num1)
    {
        printf("\n%d and %d are amicable numbers.", num1, num2);
    }
    else 
    {
        printf("\n%d and %d are NOT amicable numbers.",  num1, num2);
    }
    return 0;
}