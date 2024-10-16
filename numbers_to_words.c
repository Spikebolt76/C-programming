#include <stdio.h>

//Convert given number in words. (i.e. n=3456  output: Three Four Five Six)

int main()
{
    int number, words;

    printf("\nEnter the Nmber: ");

    while ((number = getchar()) != '\n')
    {
        switch (number)
        {
        case '0': printf("Zero ");
            break;
        
        case '1': printf("One ");
            break;

        case '2': printf("Two ");
            break;

        case '3': printf("Three ");
            break;

        case '4': printf("Four ");
            break;

        case '5': printf("Five ");
            break;

        case '6': printf("Six ");
            break;

        case '7': printf("Seven ");
            break;

        case '8': printf("Eight ");
            break;

        case '9': printf("Nine ");
            break;

        default: printf("\nEnter a valid number!");
            break;
        }
    }
}