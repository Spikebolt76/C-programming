#include <stdio.h>

void main()
{
    int a=10, b=6;
    if (a>b)                   //Using Semicolon afteer "if()" breaks the block and we get an error saying "else without previous if"//
    {
        printf("a is greater than b.");
    }
    else                      //If you don't add else block than you won't get any error but it would execute as a simple statement.//
    {
        printf("b is greater than a.");
    }
}