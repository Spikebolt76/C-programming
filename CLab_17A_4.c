#include <stdio.h>

// Swap value of two numbers using pointer :

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Call swap function with addresses of x and y
    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

// int main()
// {
//     int num1, num2;
//     printf("\nEnter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     printf("\nBefore swapping: num1 = %d, num2 = %d\n", num1, num2);

//     int *ptr1 = &num1, *ptr2 = &num2;
    
//     int temp;
//     temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;

//     printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
//     return 0;
// }
