#include <stdio.h>

int main() {
    int c;               // Variable to store character input
    int in_blank = 0;    // Flag to track if we're inside a sequence of blanks
    
    while ((c = getchar()) != EOF) 
    {
        if (c == ' ' || c == '\t') 
        {                             // If the character is a blank space
            if (!in_blank)            // If it's the first blank in a sequence
            {                         
                putchar(c);           // Output the blank
                in_blank = 1;         // Set the flag indicating we're in a blank sequence
            }
        } 
        else 
        {
            putchar(c);       // Output non-blank characters directly
            in_blank = 0;     // Reset the flag as we exit the blank sequence
        }
    }
    
    return 0;
}
