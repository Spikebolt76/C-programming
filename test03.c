#include <stdio.h>

int main()
{
    int a, b, c, max;

    printf("Enter a value of a: ");
    scanf("%d", &a);

    printf("Enter a value of b: ");
    scanf("%d", &b);

    printf("Enter a value of c: ");
    scanf("%d", &c); 

    max = (a>b)?(a>c):();

    printf("%d is the greatest number", max);
    
}