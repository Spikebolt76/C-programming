#include <stdio.h>

//Print number of days in a month considering leap year using switch:-

int main()
{
    int month, year, days;

    printf("\nEnter the year: ");
    scanf("%d", &year);

    printf("\nEnter the month number (1-12): ");
    scanf("%d", &month);

    int isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    switch (month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;

        case 4: case 6: case 9: case 11:
            days = 30;
            break;

        case 2:
        days = isLeapYear ? 29 : 28;
            break;

        default:
            printf("Invalid month!\n");
            return 1;
            }

    printf("\nNumber of days in month %d of year %d is: %d", month, year, days);

    return 0;
}


    