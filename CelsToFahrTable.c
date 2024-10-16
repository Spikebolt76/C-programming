#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -20;
    upper = 150;
    step = 10;

    printf("Celsius to Fahrenheit Conversion Table\n");
    printf("--------------------------------------\n");
    printf("Celsius\t\tFahrenheit\n");
    printf("--------------------------------------\n");

    celsius = lower;

    while (celsius <= upper)
    {
        fahr = (9.0 / 5.0 * celsius) + 32.0;
        printf("%4.2f\t\t%4.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}