//armstrong number

#include <stdio.h>

int isArmstrong(int num) {
    int originalNumber, remainder, result = 0, power;

    originalNumber = num;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        power = 1;

        for (int i = 0; i < sizeof(remainder); i++) {
            power *= remainder;
        }

        result += power;
        originalNumber /= 10;
    }

    return result == num;
}