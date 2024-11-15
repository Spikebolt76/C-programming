#include <stdio.h>

/* int main()
{
    int a, b, temp;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("Now a = %d and b = %d", a, b);

    return 0;
} */

// without using 'temp' variable:-
int main()
{
    int a = 5, b = 10;

    // Arithmetic operations to swap values
    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d, b = %d\n", a, b);
    return 0;
}