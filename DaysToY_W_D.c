#include <stdio.h>

/*Convert number of days into year, week & days. [e.g. 375 days mean 1 year, 1 week and 3
days]*/

int main()
{
    int total_days, years, weeks, days;

    printf("Enter total days: ");
    scanf("%d", &total_days);

    years = total_days / 365;
    weeks = (total_days % 365) / 7;
    days = (total_days % 365) % 7;

    printf("We can write total numbers of days = %d as: %d year(s), %d week(s) and %d day(s).", total_days, years, weeks, days);

    return 0;

}