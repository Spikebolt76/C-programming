#include <stdio.h>

/*Convert total given seconds into hours, minutes & seconds and print in HH:MM:SS. [e.g. 10000
seconds = 02:46:40)]*/

int main()
{
    int total_sec, sec, min, hr;

    printf("Enter seconds: ");
    scanf("%d", &total_sec);

    hr = total_sec / 3600;
    min = (total_sec % 3600) / 60;
    sec = (total_sec % 3600) % 60;

    printf("%02d:%02d:%02d\n", hr, min, sec);
}