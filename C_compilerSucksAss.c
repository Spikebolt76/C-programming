#include <stdio.h>

int main()
{
    int a = 3;
    // int b = ++a + ++a + ++a + ++a;
    int b = a++ + a++;

    printf("%d", b);  // this compiler puts value of a AFTER doing the increment, that's why we get answer 10.

    return 0;
}           