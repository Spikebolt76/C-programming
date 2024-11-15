#include <stdio.h>
#include <stdlib.h> // For atoi()

int main()
{
    char number[] = "123";
    int result = atoi(number);   // Converts string to int
    printf("%d\n", result + 10); // Output: 133
    return 0;
}
