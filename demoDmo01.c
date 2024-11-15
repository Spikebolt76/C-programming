#include <stdio.h>

int main()
{
    printf("C test program\n");

    int h = 34;
    if(h <= 0)
    {
        int x = 45;
        printf("Valid\n");
    }
    else
    {
        printf("Invalid\n");
    }
    printf("Test variable (isOutOfscope): %d", x);
}