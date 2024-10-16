#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
     
    float z = (float) x / (float) y; //pre-seeding datatype mto convert from int to float

    printf("%f", z);
}