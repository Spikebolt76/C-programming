#include <stdio.h>

int main()
{
    int day;

    printf("\nEnter a number (1-7) to get the corresponding day of the week: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;

    default:
        printf("Not a valid input! Please enter a number between 1 to 7.");
        break;
    }
    return 0;
}