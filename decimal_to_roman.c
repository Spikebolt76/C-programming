#include <stdio.h>

/*/ Get a decimal number from user and convert it into roman digits. (Symbol: I:1, IV:4, V:5,
IX:9, X:10, XL:40, L:50, XC:90, C:100, CD:400, D:500, CM:900, M:1000) /*/

//For numbers larger than 3999, traditionally, Roman numerals are written with overlines to represent multiplication by 1000.
//overlines can't easily be represented in a simple C program output.

int main()
{
    int decNum, roman;

    printf("\nEnter a decimal number: ");
    scanf("%d", &decNum);

    printf("\nRoman numeral of %d is: ", decNum);

    while (decNum >= 1000)
    {
        printf("M");
        decNum -= 1000;
    }

    while (decNum >= 900)
    {
        printf("CM");
        decNum -= 900;
    }

    while (decNum >= 500)
    {
        printf("D");
        decNum -= 500;
    }

    while (decNum >= 400)
    {
        printf("CD");
        decNum -= 400;
    }

    while (decNum >= 100)
    {
        printf("C");
        decNum -= 100;
    }

    while (decNum >= 90)
    {
        printf("XC");
        decNum -= 90;
    }

    while (decNum >= 50)
    {
        printf("L");
        decNum -= 50;
    }

    while (decNum >= 40)
    {
        printf("XL");
        decNum -= 40;
    }

    while (decNum >= 10)
    {
        printf("X");
        decNum -= 10;
    }

    while (decNum >= 9)
    {
        printf("IX");
        decNum -= 9;
    }

    while (decNum >= 5)
    {
        printf("V");
        decNum -= 5;
    }

    while (decNum >= 4)
    {
        printf("IV");
        decNum -= 4;
    }

    while (decNum >= 1)
    {
        printf("I");
        decNum -= 1;
    }
    printf("\n");

    return 0;
}