#include <stdio.h>

void main()
{
    int ch, nl;
    nl = 0;

    while ((ch = getchar()) != EOF)    //Remember:- [Input buffer: H  e  l  l  o  \n (newline after hitting Enter)  ]
    {                                  //counting lines is just counting \n (new lines), u can write other programs to count tabs, blanks and newlines
        if (ch == '\n')                //if (ch == '\n' || ch == '\t' || ch == ' ')
            ++nl;
    }
    printf("\nThe number of lines are: %d", nl);
}

/* A char written between single quotes represent an integer value equal to the numerical value of the character in the
   machine's character set. It's called a 'character constant'.(Just another way to write a small integer.)
   
   The escape sequence '\n' is also legal in char constants. 
   So, '\n' stands for the value of the newline character [10 in ASCII]
   
   Note that '\n' is a single char, in expression, just an integer.
   BUT "\n" is a string constant, that happens to contain only one character.*/