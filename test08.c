#include <stdio.h>

int main()
{
    int num = 0;
    int factor = 1; 

    printf("\nEnter a number: ");
    scanf("%d", &num);

    while(factor <= num)
    {
        if(num % factor == 0)
        {
            printf("%d\n", factor);
        }
        factor++;
    }
    return 0;
}



