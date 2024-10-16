#include <stdio.h>
#include <math.h>

//Print number and its square root for 0 to 9 :-

int main()
{
    int i;
    float sqroot;

    printf("Square Root of o to 9\n");
    printf("-----------------------------\n");
    printf("Number \t\t Square_Root\n");
    printf("-----------------------------\n");

    for (i = 1; i <= 9; i++)
    {
        sqroot = sqrt(i);
        printf("%d\t=>\t%.2f\n", i, sqroot);
    }
    return 0;
}