#include <stdio.h>

/* Calculate sum and average of the square of first 10 integers 
   whose square has last digit 3 */

int main()
{
    int num, count = 0, sum = 0;
    float avg;
    
    for (num = 0; count < 10; num++) 
    {
        int sqr = num * num;
        int last_Dig = sqr % 10;

        if (last_Dig == 3) 
        {
            sum += sqr;
            count++;
        }
    }

    avg = (float)sum / count;

    printf("\nThe sum : %d", sum);
    printf("\nThe average : %.2f", avg);

    return 0;
}
