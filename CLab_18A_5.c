// Swap two numbers using call by value and call by reference :

#include <stdio.h>

int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int num1, num2;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nOriginally: num1 = %d, num2 = %d", num1, num2);
    swap(&num1, &num2);
    printf("\nAfter Swapping both numbers: num1 = %d, num2 = %d", num1, num2);

    return 0;
}

// Call by Value: 
// #include <stdio.h>

// void swap(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("Inside function: a = %d, b = %d\n", a, b);
// }

// int main() {
//     int x = 5, y = 10;

//     printf("Before swap: x = %d, y = %d\n", x, y);
//     swap(x, y);
//     printf("After swap (in main): x = %d, y = %d\n", x, y);

//     return 0;
// }

