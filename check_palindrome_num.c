#include <stdio.h>

/* Check whether the given number is palindrome or not. */

int main()
{
    int num, remain, reverseNum = 0, orgNum;

    printf("\nEnter the number: ");
    scanf("%d", &num);

    orgNum = num;

    while (num != 0)
    {
        remain = num % 10;
        reverseNum = reverseNum * 10 + remain;
        num /= 10;
    }

    if (orgNum == reverseNum)
    {
        printf("\n%d is a palindrome.", orgNum);
    }
    else {
        printf("\n%d is not a palindrome.", orgNum);
    }
    return 0;
}