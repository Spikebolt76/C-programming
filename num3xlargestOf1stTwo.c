/*Read 3 numbers, multiply largest number from first two numbers to third one using
conditional. */

#include <stdio.h>

int main()
{
    int largest, num1, num2, num3, result;

    printf("\nEnter all three numbers: ");
    scanf("%d %d %d", &num1 ,&num2 ,&num3);

    largest = (num1 > num2) ? num1 : num2;

    result = largest * num3;

    printf("The result of multiplying the largest number (%d) from the first two numbers with the third one is: %d\n", largest, result);

    return 0;

}