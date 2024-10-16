#include <stdio.h>

int main()
{
    int dec_num, i;
    int a[32]; // Array to store binary digits

    printf("\nEnter a decimal number: ");
    scanf("%d", &dec_num);

    unsigned int temp;

    // If the number is negative, convert it to unsigned 32-bit representation
    if (dec_num < 0)
    {
        temp = (unsigned int)(dec_num); // Automatically handles 2's complement
    }
    else  
    {
        temp = dec_num;
    }

    // Convert to binary (for both positive and negative numbers)
    for (i = 31; i >= 0; i--)
    {
        a[i] = temp % 2;
        temp /= 2;
    }

    printf("\nBinary of %d is: ", dec_num);

    for (i = 0; i <= 31; i++)
    {
        printf("%d", a[i]);
    }
    
    return 0;
}
