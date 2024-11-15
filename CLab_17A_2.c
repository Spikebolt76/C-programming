#include <stdio.h>

// Demonstrate int, float, double and char pointer :

int main()
{
    // int pointer
    int a = 10;
    int *int_ptr = &a;
    printf("Value of a: %d\n", *int_ptr);  // Dereferencing to get value of 'a'
    printf("Address of a: %p\n", int_ptr); // Address stored in int_ptr

    // float pointer
    float b = 3.14f;
    float *float_ptr = &b;
    printf("Value of b: %.2f\n", *float_ptr); // Dereferencing to get value of 'b'
    printf("Address of b: %p\n", float_ptr);  // Address stored in float_ptr

    // double pointer
    double c = 2.718;
    double *double_ptr = &c;
    printf("Value of c: %.3f\n", *double_ptr); // Dereferencing to get value of 'c'
    printf("Address of c: %p\n", double_ptr);  // Address stored in double_ptr

    // char pointer
    char d = 'A';
    char *char_ptr = &d;
    printf("Value of d: %c\n", *char_ptr);  // Dereferencing to get value of 'd'
    printf("Address of d: %p\n", char_ptr); // Address stored in char_ptr

    return 0;
}
