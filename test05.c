//5 7 8 8 8 : rlpit c compiler (online)
#include <stdio.h>

int main()
{
    int a = 10;
    printf("%d %d %d %d %d %d %d", a++, a++, ++a, ++a, a, a++, ++a);

    return 0;
}