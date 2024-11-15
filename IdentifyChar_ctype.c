#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Asking user to input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking if character is uppercase
    if (isupper(ch)) {
        printf("The entered character is an uppercase letter.\n");
    }
    // Checking if character is lowercase
    else if (islower(ch)) {
        printf("The entered character is a lowercase letter.\n");
    }
    // Checking if character is a digit
    else if (isdigit(ch)) {
        printf("The entered character is a digit.\n");
    }
    // If none of the above, it is a special character
    else {
        printf("The entered character is a special character.\n");
    }

    return 0;
}
