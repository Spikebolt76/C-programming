#include <stdio.h>

//Program that prints its input one word per line :-

#include <stdio.h>

int main() 
{
    int c;

    while ((c = getchar()) != EOF) 
    {
        if (c == ' ' || c == '\n' || c == '\t') 
        {
            putchar('\n');
        } 
        else 
        {
            putchar(c);
        }
    }

    return 0;
}
