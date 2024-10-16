#include <stdio.h>

int main() {
    unsigned long long int num, count = 0;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%llu", &num);

    // If the number is 0, count it as 1 digit
    if (num == 0) {
        count = 1;
    } else {
        // Loop to count digits
        while (num != 0) {
            num = num / 10;  // Remove the last digit of the number
            count++;
        }
    }

    // Output the total count of digits
    printf("Total number of digits: %llu\n", count);

    return 0;
}
