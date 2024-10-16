#include <stdio.h>
#include <ctype.h>

float fahrToCels(float temp);
float celsToFahr(float temp);
void printResult(float temp, char unit);

int main()
{
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf(" %c", &unit);  

    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = celsToFahr(temp);  
        printResult(temp, 'F'); 
    }
    else if (unit == 'F')
    {
        printf("\nEnter the temp in fahrenheit: ");
        scanf("%f", &temp);
        temp = fahrToCels(temp);
        printResult(temp, 'C');
    }
    else
    {
        printf("\n%c is not a valid unit of measurement", unit);
    }
    return 0;
}

float fahrToCels(float temp)
{
    return  ((temp - 32) * 5) / 9;
}
float celsToFahr(float temp)
{
    return (temp * 9 / 5) + 32;
}
void printResult(float temp, char unit)
{
    if(unit == 'F'){
        printf("\nThe temp in Fahrenheit is: %.1f", temp);
    }
    else if(unit == 'C'){
        printf("\nThe temp in Celsius is: %.1f", temp);
    }
}