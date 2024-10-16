#include <stdio.h>

int main()
{
    int num, i = 0, result = 0;
    
    printf("Enter the value of num: ");
    scanf("%d", &num);

    while (i <= num)
    {
        result = result + i;
        i++;
    }
    printf("\nSum of 1 to %d is: %d", num, result);
    return 0;
}