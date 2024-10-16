#include <stdio.h>
#include <time.h>

int main()
{
    time_t current_time;
    time(&current_time);

    printf("Current Date And Time: %s\n", ctime(&current_time));

    return 0;
}