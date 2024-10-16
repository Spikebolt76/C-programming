#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("a is the Largest among all three numbers.");
        }
        else
        {
            printf("c is the Largest among all three numbers.");
        }
    }
    else
    {
        if (b > c)
        {
            printf("b is the Largest among all three numbers.");
        }
        else
        {
            printf("c is the Largest among all three numbers.");
        }
    }

    return 0;
    
}