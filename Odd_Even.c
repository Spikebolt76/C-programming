#include <stdio.h>

int main()
{
    int Num;

    printf("Enter the Number: ");
    scanf("%d", &Num);

    if (Num % 2 == 0)
    {
        printf("Num is an Even number.");
    }
    else 
    {
        printf("Num is an Odd number.");
    }
}