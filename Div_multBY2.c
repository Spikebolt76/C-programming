#include <stdio.h>
#include <ctype.h>

int main()
{
    float num;
    float result;
    char operation;

    printf("\nWhich Operation do you want to perform?: ");
    scanf(" %c", &operation);  //D for devision and M for multiplication


    printf("\nEnter the Number: ");
    scanf("%f", &num);

    operation = toupper(operation);

    switch (operation)
    {
    case 'M': 
    {
        result = num + num;
        printf("\n%f multiplied by 2 is: %f", num, result);
        break;
    }
    case 'D':
    {
        int count = 0;
        while (num >= 2) 
        {
            num = num - 2;
            count++;
        }
        printf("\n%f divided by 2 is: %f", num, count);
        break;
    }
    default:
     printf("\nPlease enter valid operation.");
        break;
    }
    return 0;
}