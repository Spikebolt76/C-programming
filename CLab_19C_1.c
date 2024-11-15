#include <stdio.h>

//Find reverse of any number using recursion :

long long int reverseNum(long long int num, long long int reversed)
{
    if (num == 0)
    {
        return reversed;
    }
    else
    {
        return reverseNum(num / 10, reversed * 10 + (num % 10));
    }
}
/* OR else{
        reversed = reversed * 10 + (num % 10); 
        num /= 10; 
        return reverseNum(num, reversed);
        }   */

int main()
{
    long long int num;
    printf("\nEnter a number: ");
    scanf("%lld", &num);

    long long int revNum = reverseNum(num, 0);

    printf("\nNumber after reversing: %lld", revNum);
}