#include <stdio.h>

//Swap 􀆒rst and last digits of a number :-

int main()
{
    int num, i, temp;
    int a[10];            //because int data type can have total 10 digits
    i = 0;

    for (i = 0; i < 10; ++i)
    {
        a[i] = 0;
    }
    i = 0;
    printf("\nEnter a number: ");

    while ((a[i] = getchar()) != '\n')
    {
        i++;
    }

    if (i < 2) 
    {
        printf("Number must have at least two digits.\n");
        return 1; // Exit if there aren't enough digits to swap
    }
    
    temp = a[0];
    a[0] = a[i-1];
    a[i-1] = temp;

    int dig;

    printf("\nAfter swapping first and last digits: ");

    for (dig = 0; dig <= i; dig++)
    {
        putchar(a[dig]);
    }
    putchar('\n');
    return 0;
}