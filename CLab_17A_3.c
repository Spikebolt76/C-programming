#include <stdio.h>

// Calculate sum of two numbers using pointer :

// int main()
// {
//     int a, b;
//     a = 4, b = 8;

//     int *ptrA, *ptrB;
//     ptrA = &a;
//     ptrB = &b;

//     printf("\nSum of a and b = %d", *ptrA + *ptrB);
// }

int main() {
    int num1, num2, sum;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Declare pointers to integers
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int *ptrSum = &sum;

    // Calculate the sum using pointers
    *ptrSum = *ptr1 + *ptr2;  // Dereference ptr1 and ptr2 to get the values

    // Print the result
    printf("The sum of %d and %d is: %d\n", *ptr1, *ptr2, *ptrSum);

    return 0;
}