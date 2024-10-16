#include <stdio.h>

void main()
{
    int ch = 127;
    // 0111 1111          0000 0000 0000 0001 1111 1100 0000                   
    // 1111 1110                      
    // 0000 0010           

    ch = ch<<2;

    printf("%d", ch);
}