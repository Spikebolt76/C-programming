#include <stdio.h>

// int main()
// {
//     int i, num, count = 0;
//     int temp, digit;

//     printf("\nEnter a number: ");
//     scanf("%d", &num);

//     for (i = 0; i <= 9; i++)
//     {
//         temp = num;
//         for (count = 0; temp != 0;)
//         {
//             digit = temp % 10;
//             temp /= 10;
//             if (digit == i)
//             {
//                 count++;
//             }
//         }
//         if (count > 0)
//         {
//             printf("\nOccurrence of %d: %d", i, count);
//         }
//     }
//     return 0;
// }

//With Array :-

int main()
{
    int num, digit, i;
    int frequency[10] = {0};

    printf("\nEnter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (frequency[i] > 0)
        {
            printf("\nFrequency of digit %d: %d", i, frequency[i]);
        }
    }

    return 0;
}
