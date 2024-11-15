#include <stdio.h>

// Define the structure
struct Example {
    char c;    // 1 byte
    int i;     // 4 bytes
};

int main() {
    // Declare a variable of type struct Example
    struct Example example;

    // Assign values to the structure members
    example.c = 'a';
    example.i = 5;

    // Display the size of the structure
    printf("Size of struct Example: %lu\n", sizeof(struct Example));

    // Display the values of the members
    printf("Character: %c, Integer: %d\n", example.c, example.i);

    return 0;
}
