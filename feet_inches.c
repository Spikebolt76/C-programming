#include <stdio.h>

int main()
{
    float feet, inches;
    printf("Enter Total Feet: ");
    scanf("%f", &feet);

    inches = feet*12;

    printf("Total inches are %f", inches);
}