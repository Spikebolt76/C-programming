//Print 1 to 10 then modify program Print 1 to n using while and do while loop.

#include <stdio.h>

//with while loop:

// int main()
// {
//     int num, i = 1;

//     printf("Enter the value of n: ");
//     scanf("%d", &num);

//     while (i <= num)
//     {
//         printf("%d\n", i);
//         i++;
//     }  
//     return 0;
// }

//with do-while loop:

int main() 
{
    int i = 1, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    do 
    {
        printf("%d ", i);
        i++;
    } 
    while (i <= n);

    return 0;
}

//with for-loop :-

// int main()
// {
//     int i, num;

//     printf("\nEnter the value of n: ");
//     scanf("%d", &n);

//     for (i = 0; i <= n; i++)
//     {
//         printf("%d ", i);
//     }
//     return 0;
// }