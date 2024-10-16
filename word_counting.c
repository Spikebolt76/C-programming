#include <stdio.h>

#define IN 1        // Inside a word
#define OUT 0       // Outside a word

void main()
{
    int c, nl, nw, nc, state;  //nc= number of char, nl= number of lines, nw= number of words

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n') {
            ++nl;
        }

        if (c == ' ' || c == '\n' || c == '\t')  //OR and AND operators are evaluated from left to right.
        {                                        //precedence: AND > OR
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("\nnumber of lines: %d, number of Words: %d, number of chars: %d", nl, nw, nc);
}