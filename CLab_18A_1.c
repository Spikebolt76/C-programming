#include <stdio.h>

// Add two numbers using function :

void add(int x, int y);

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    add(num1, num2);

    return 0;
}

void add(int x, int y)
{
    printf("\nsum of num1 and num2 = %d", x + y);
}