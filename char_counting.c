#include <stdio.h>

//character counter: counts all the char, spaces and special cahrs.

void main()
{
    long nc = 0;

    while(getchar() != EOF)  //Enter the character sequence > enter > ctrl+z > enter
    {
        ++nc;
    }
    
    printf("\nThe number of characters = %ld", nc);

}