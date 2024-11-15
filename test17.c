#include <stdio.h>

int digCnt(int n);

int main()
{
    int num, result = 0;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        result = 1; // Since 0 has one digit
    } else {
        result = digCnt(num);
    }

    printf("\nNumber of digits = %d", result);
    return 0;
}

int digCnt(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else {
       return 1 + digCnt(n / 10);
    }
}

// sum of all digits :

// #include <stdio.h>

// int digCnt(int n);

// int main()
// {
//     int num, result = 0;
//     printf("\nEnter a number: ");
//     scanf("%d", &num);

//     if (num == 0) {
//         result = 1; // Since 0 has one digit
//     } else {
//         result = digCnt(num);
//     }

//     printf("\nNumber of digits = %d", result);
//     return 0;
// }

// int digCnt(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     else {
//        return n % 10 + digCnt(n / 10);
//     }
// }
