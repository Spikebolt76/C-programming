//Print odd numbers between 1 to 10 then modify 1 to n using while and do while loop :-

#include <stdio.h>

//with while loop :

// int main()
// {
//     int num, i = 0;

//     printf("\nEnter value of num: ");
//     scanf("%d", &num);

//     while (i <= num)
//     {
//         if (i % 2 != 0)
//         {
//             printf("%d ", i);
//         }
//         i++;
//     }
//     return 0;
// }

//with do-while loop :

int main()
{
    int num, i = 0;

    printf("\nEnter value of num: ");
    scanf("%d", &num);

    do
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
        i++;
    }
    while (i <= num);

    return 0;
}