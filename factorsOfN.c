#include <stdio.h>

//Print factors of input number:-

int main()
{
    int num, i;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nfactors of %d: ", num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}