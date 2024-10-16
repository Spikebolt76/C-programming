#include <stdio.h>

//For N number (user input) of chocolates:-//

int main()
{
    int rupees;
    int choc_price = 1;
    int wrap_exchange = 3;
    int chocolates, wrappers;

    printf("Enter the amount of rupees: ");
    scanf("%d", &rupees);

    chocolates = rupees / choc_price;
    wrappers = chocolates;

    while (wrappers >= wrap_exchange )
    {
        int exchange_choc = wrappers / wrap_exchange;
        chocolates += exchange_choc;
        wrappers = wrappers % wrap_exchange + exchange_choc; //updating the total number of remaining wrappers.
    }
    printf("Total chocolates you can buy: %d\n", chocolates);

    return 0;
}

//For total 15 chocolates:-//

// int main()
// {
//     int rupees = 15;
//     int choc_price = 1;
//     int wrap_exchange = 3;
//     int chocolates = rupees / choc_price;
//     int wrappers = chocolates;

//     while (wrappers >= wrap_exchange)
//     {
//         int exchange_choc = wrappers / wrap_exchange;
//         chocolates += exchange_choc;
//         wrappers = wrappers % wrap_exchange + exchange_choc; // updating the total numbre of remaining wrappers
//     }
//     printf("Total chocolates: %d\n", chocolates);

//     return 0;
// }
