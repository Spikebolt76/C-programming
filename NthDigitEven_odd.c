#include <stdio.h>

//check if the Last digit of Input number is Odd Or Even:-

/*int main()
{
    int last_digit, number;

    printf("Enter the number: ");
    scanf("%d", &number);

    last_digit = number % 10;

    if (last_digit % 2 == 0)
    {
        printf("The last digit(%d) of the number(%d) is Even.\n", last_digit, number);
    }
    else
    {
     printf("The last digit(%d) of the number(%d) is Odd.\n", last_digit, number);   
    }
    return 0;
} */

//check if the second-to-last digit of an input integer is even or odd:-

int main()
{
    int secondLastdigit, number;

    printf("Enter the number: ");
    scanf("%d", &number);

    secondLastdigit = (number / 10) % 10;

    if (secondLastdigit % 2 == 0)
    {
        printf("The second-to-last digit(%d) of the number(%d) is Even.\n", secondLastdigit, number);
    }
    else
    {
     printf("The second-to-last digit(%d) of the number(%d) is Odd.\n", secondLastdigit, number);   
    }
    return 0;
}


