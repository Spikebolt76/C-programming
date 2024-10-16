/* Find distance between two numbers[Number of bits to change]: Read two decimal numbers a and b, convert them into binary and
   print total number of bits that you need to change to get eg. a from b (in binary ofc.)  */

#include <stdio.h>

int main()
{
    int num1, num2, bin1, bin2;
    int dist = 0;

    printf("\nEnter Num1 and Num2 : ");
    scanf("%d %d", &num1, &num2);

    printf("||Comparison of both numbers: ||\n");

    while (num1 != 0 || num2 != 0)
    {

        bin1 = num1 % 2;
        printf("%d ", bin1);
        num1 = num1 / 2;

        bin2 = num2 % 2;
        printf("%d \n", bin2);
        num2 = num2 / 2;

        if (bin1 != bin2)
        {
            dist++;
        }
    }
    printf("The Distance b/w both numbers is: %d", dist);
    return 0;
}

// Another Method with XOR operator: [You don't need to convert into binary with this one.]
//-------------------------------//

// int main()
// {
//     int num1, num2;

//     printf("\nEnter Num1 and Num2 : ");
//     scanf("%d %d", &num1, &num2);

//     int xorResult = num1 ^ num2; // Biiwise XOR operator
//     int dist = 0;

//     while (xorResult > 0)
//     {
//         dist += xorResult & 1;
//         xorResult >>= 1;
//     }

//     printf("The Distance b/w both numbers is: %d", dist);
//     return 0;
// }

/* 1 & 1 results in 1
   1 & 0 results in 0
   0 & 1 results in 0
   0 & 0 results in 0 */