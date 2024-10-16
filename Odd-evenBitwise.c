#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);

    (num & 1)?(printf("Number is Odd")):printf("Number is Even");
}