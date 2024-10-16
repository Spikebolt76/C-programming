#include <stdio.h>

int main() {
    int inputType, num, i;
    char binary[32]; // Array to hold the binary representation (up to 32 bits)
    
    // Ask the user for the input type: binary or decimal
    printf("Input number:\n1. Binary\n2. Decimal\nEnter your choice (1 or 2): ");
    scanf("%d", &inputType);

    if (inputType == 1) {
        // Input binary
        printf("Enter a binary number: ");
        scanf("%s", binary);
        
        // Calculate the length of the binary string
        int length = 0;
        while (binary[length] != '\0') {
            length++;
        }

        // Calculate and print 1's complement
        printf("1's complement: ");
        for (i = 0; i < length; i++) {
            printf("%c", (binary[i] == '0') ? '1' : '0');
        }
        printf("\n");

        // Calculate and print 2's complement
        printf("2's complement: ");
        int carry = 1; // Start with carry as 1
        for (i = length - 1; i >= 0; i--) {
            if (binary[i] == '1' && carry == 1) {
                printf("0");
            } else if (binary[i] == '0' && carry == 1) {
                printf("1");
                carry = 0; // No more carry after addition
            } else {
                printf("%c", binary[i]); // No change
            }
        }
        // If carry is still 1, we need to add another bit
        if (carry == 1) {
            printf("1");
        }
        printf("\n");
    } 
    else if (inputType == 2) {
        // Input decimal
        printf("Enter a decimal number: ");
        scanf("%d", &num);

        // Convert decimal to binary
        int temp = num;
        int index = 0;
        while (temp > 0) {
            binary[index++] = (temp % 2) + '0';
            temp /= 2;
        }
        binary[index] = '\0';

        // Reverse the binary string
        for (i = 0; i < index / 2; i++) {
            char t = binary[i];
            binary[i] = binary[index - 1 - i];
            binary[index - 1 - i] = t;
        }

        // Calculate and print 1's complement
        printf("1's complement: ");
        for (i = 0; i < index; i++) {
            printf("%c", (binary[i] == '0') ? '1' : '0');
        }
        printf("\n");

        // Calculate and print 2's complement
        printf("2's complement: ");
        int carry = 1; // Start with carry as 1
        for (i = index - 1; i >= 0; i--) {
            if (binary[i] == '1' && carry == 1) {
                printf("0");
            } else if (binary[i] == '0' && carry == 1) {
                printf("1");
                carry = 0; // No more carry after addition
            } else {
                printf("%c", binary[i]); // No change
            }
        }
        // If carry is still 1, we need to add another bit
        if (carry == 1) {
            printf("1");
        }
        printf("\n");
    } 
    else {
        printf("Invalid input type selected.\n");
    }

    return 0;
}
