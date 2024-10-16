#include <stdio.h>

int main()
{
    float a, b, c;

    printf("\nEnter value of a: ");
    scanf("%f", &a);

    printf("\nEnter value of b: ");
    scanf("%f", &b);

    printf("\nEnter value of c: ");
    scanf("%f", &c);

    if (a>b && a>c)
    {
        if (b>c)
        {
            printf("\nb is the second largest number among three.");
        }
        else
        {
            printf("\nc is the second largest number among three.");
        }
    }
    else if (b>c && b>a)
    {
        if (c>a)
        {
            printf("\nc is the second largest number among three.");
        }
        else 
        {
            printf("\na is the second largest number among three. ");
        }
    }
    else
    {
        printf("\nb is the second largest number among three. ");
    }
    return 0;
}