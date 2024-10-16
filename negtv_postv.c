#include <stdio.h>

int main()
{
    int Num;

    printf("Enter the Number: ");
    scanf("%d", &Num);

    if (Num >= 0)
    {
        printf("Number is a Positive integer.");
    }
    else
    {
        printf("Number is a Negative integer.");
    }
}