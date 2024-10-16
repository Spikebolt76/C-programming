/* [1] Uninitialized Variables:
---------------------------
If you declare a variable but do not initialize it, 
it may contain whatever value was already in that memory location.
For example: 
------------------------------------------------------------------*/

#include <stdio.h>

void main()
{
    int a;

    printf("\n%d ", a);
}