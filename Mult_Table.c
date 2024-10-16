#include <stdio.h>

int main()
{
    int num, ans;
    int mult = 1;

    printf("\nEnter a number for its Mult table: ");
    scanf("%d", &num);

    while(mult <= 10)
    {
        ans = num * mult;

        printf("%d * %d = %d\n", num, mult, ans);

        mult++;
    }
    return 0;
}