#include <stdio.h>

void main()
{
    int a, b;
    int c;

    printf("Enter the value of a:\n");
    scanf("%d",&a);

    printf("Enter the value of b:\n");
    scanf("%d",&b);

    c = a % b;

    printf("a modulo b is: %d",c);

}