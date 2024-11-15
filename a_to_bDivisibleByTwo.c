//Print numbers between two given numbers which is divisible by 2:

#include <stdio.h>

int main() 
{
    int start, end;

    // Input the start and end range from the user
    printf("Enter the start number: ");
    scanf("%d", &start);
    printf("Enter the end number: ");
    scanf("%d", &end);

    // If the start number is odd, make it even by adding 1
    if (start % 2 != 0) 
    {
        start++;
    }

    printf("Number divisible by 2 between %d and %d are: ", start, end);

    // Loop through the range and print only even numbers
    for (int i = start; i <= end; i += 2) 
    {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
