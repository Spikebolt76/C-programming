// //By reversing the digits individually:

// #include <stdio.h>

// int main() 

// {
//     unsigned long long num;

//     printf("Enter an integer: ");
//     scanf("%llu", &num);

//     printf("\nThe Reversed number is: ");

//     while (num != 0) 
//     {
//         unsigned long long reversed = num % 10;  
//         printf("%llu", reversed);                
//         num = num / 10;                          
//     }

//     printf("\n");
//     return 0;
// }

//Prints the Entire reversed number:


#include <stdio.h>

int main() 
{
    unsigned long long int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%llu", &num);

    while (num != 0) 
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    printf("Reversed number: %llu\n", reversed);

    return 0;
}
