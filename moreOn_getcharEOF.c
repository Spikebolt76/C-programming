#include <stdio.h>

//Verify that the expression getchar() != EOF is 0 or 1 :-

int main() {
    int result;

    printf("Enter a character (Press Ctrl+D on Linux/Mac or Ctrl+Z on Windows to send EOF):\n");

    result = (getchar() != EOF);  // Check if getchar() returns a value different from EOF

    printf("The expression getchar() != EOF evaluates to: %d\n", result);

    return 0;
}


// Print the value of EOF:-
//------------------------
// EOF is and predefined integer in the <stdio.h>

// void main()
// {
//     int cpc;

//     printf("\nThe value of EOF is: %d", EOF);
// }

