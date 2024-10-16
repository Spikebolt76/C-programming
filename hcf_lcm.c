#include <stdio.h>

// Find HCF and LCM of two numbers :-

int main()
{
    int num1, num2, comm_fac, lcm, hcf

    printf("\nEnter the first number: ");
    scanf("%d", &num1);
    printf("\nEnter the second number: ");
    scanf("%d", &num2);

    //Because of the loop/condition, the last common divisor would itself be the greatest.

    for (comm_fac = 1; comm_fac <= num1 && comm_fac <= num2; i++)
    {
        if (num1 % comm_fac == 0 && num2 % comm_fac == 0)
        {
            hcf = comm_fac;                    
        }
    }

    lcm = (num1 * num2) / hcf;      //Relation between LCM and HCF

    printf("\nHCF of %d and %d is: ", num1, num2);
    printf("\nLCM of %d and %d is: ", num1, num2);

    return 0;
}

// Same program with Euclidian Method to find HCF :-

// int main()
// {
//     int num1, num2, a, b, hcf, lcm;

//     printf("\nEnter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     a = num1;
//     b = num2;

//     while (b != 0)
//     {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     hcf = a;

//     lcm = (num1 * num2) / hcf;

//     printf("\nHCF of %d and %d is: ", num1, num2);
//     printf("\nLCM of %d and %d is: ", num1, num2);

//     return 0;
// }

