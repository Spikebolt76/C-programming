#include <stdio.h>

int main() {
    int num;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the least significant bit (LSB) is 1 or 0
    if (num & 1) {
        printf("%d is an odd number.\n", num);
    } else {
        printf("%d is an even number.\n", num);
    }

    return 0;
}
