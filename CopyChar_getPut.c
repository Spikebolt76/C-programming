#include <stdio.h>

//Copy input to output using getchar()-putchar() :- 

/* getchar() and putchar() are functions in c programming, provided by the standard input-output library.
   The key is that getchar() advances the reading position in the input buffer. Once a character is read, 
   the next call to getchar() moves on to the next character in the input sequence.
   It doesn't "reset" or "rewind" to the start—each new call to getchar() reads the next character in the sequence.
   the value of the character is stored in getchar as integer. then puthchar() converts it back to that perticular character.
   
   example::- Input buffer: H  e  l  l  o  \n (newline after hitting Enter) */

// int main()
// {
//     int cpc;

//     while((cpc = getchar()) != EOF)
//     {
//         putchar(cpc);
//     }
//     return 0;
// }

// """ Another version:

int main()
{
    int cpc;

    cpc = getchar();
    while (cpc != EOF)
    {
        putchar(cpc);
        cpc = getchar();
    }
    return 0;
}