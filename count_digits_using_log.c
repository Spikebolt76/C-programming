#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Number of digits: 1\n");
    }
    else
    {
        int numDigits = (int)log10(abs(n)) + 1; 
        printf("Number of digits: %d\n", numDigits);
    }

    return 0;
}
