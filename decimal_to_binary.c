#include <stdio.h>

int main()
{
    float number;
    int int_part;
    float frac_part;

    // Input a float number
    printf("Enter a decimal number: ");
    scanf("%f", &number);

    // Separate the integer part and fractional part
    int_part = (int)number;        // Extract the integer part
    frac_part = number - int_part; // Extract the fractional part

    // Convert and print the integer part to binary
    printf("\nBinary representation: ");

    // Special case for 0
    if (int_part == 0)
    {
        printf("0");
    }
    else
    {
        // Use a temporary variable to reverse the process and print the integer part
        unsigned int mask = 1 << 30; // Start with the highest bit position for a 32-bit int

        // Skip leading zeros
        while ((int_part & mask) == 0)
        {
            mask >>= 1;
        }

        // Now print the binary digits
        while (mask > 0)
        {
            if (int_part & mask)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            mask >>= 1;
        }
    }

    // Convert and print the fractional part to binary
    if (frac_part > 0)
    {
        printf("."); // Add the decimal point

        // Limit fractional binary to 8 places after the decimal
        int limit = 8;

        while (frac_part > 0 && limit--)
        {
            frac_part *= 2;
            if (frac_part >= 1)
            {
                printf("1");
                frac_part -= 1;
            }
            else
            {
                printf("0");
            }
        }
    }

    printf("\n");

    return 0;
}

// line 31 to 49: simpler form :-

// if (int_part == 0)
// {
//     printf("0"); // If integer part is 0, just print 0
// }
// else
// {
//     // Convert integer part (e.g., 10) to binary by repeatedly dividing by 2
//     while (int_part > 0)
//     {
//         printf("%d", int_part % 2); // Print the remainder (either 0 or 1)
//         int_part /= 2;              // Divide the number by 2
//     }
// }