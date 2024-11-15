#include <stdio.h>

void main()
{
    int a=0,b=1,c=5,d=0;
    d= ++a && (b++ || c++);
    printf("%d %d %d %d",a,b,c,d);
}