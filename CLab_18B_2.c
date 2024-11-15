#include <stdio.h>
#include "customLib_01.h"

int main()
{
    int num;
    int is_any = 0; 

    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
    {
        printf("\n%d is a Prime number.", num);
        is_any = 1;
    }
    if (isArmstrong(num))
    {
        printf("\n%d is an Armstrong number.", num);
        is_any = 1;
    }
    if (isPerfect(num))
    {
        printf("\n%d is a Perfect number.", num);
        is_any = 1;
    }

    if (!is_any)
    {
        printf("\n%d is neither Prime, nor Armstrong, nor Perfect.", num);
    }

    return 0;
}
