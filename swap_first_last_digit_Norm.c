#include <stdio.h>

int main()
{
    int num, last_dig, first_dig, i, temp;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    last_dig = num % 10;

    temp = num;

    while (temp >= 10)
    {
        temp /= 10;
    }
    first_dig = temp;

    
}