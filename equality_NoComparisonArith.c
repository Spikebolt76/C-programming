//Check for equality of two numbers without using arithmetic or comparison operator.

#include <stdio.h>

int main()
{
    int num1, num2, result;

    printf("\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = num1 ^ num2;

    switch (result)
    {
        case 0:
            
            printf("\n%d and %d are equal.", num1, num2);
            break;
        default:
           
            printf("\n%d and %d are not equal.", num1, num2);
            break;
    }

    return 0;
}