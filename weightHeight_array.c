#include <stdio.h>

/* Read five person height and weight and count the number of person having height
greater than 170 and weight less than 50. */

int main()
{
    int height[5], weight[5];
    int count = 0;

    // Input height and weight for 5 persons
    for (int i = 0; i < 5; i++)
    {
        printf("Enter height (in cm) and weight (in kg) for person %d: ", i + 1);
        scanf("%d %d", &height[i], &weight[i]);
    }
/* In C, when you declare a variable like int i inside a for loop, the scope of that variable 
   is limited to the block of the loop itself. That means the variable i only exists within the first 
   for loop. Once the loop is done, the variable i goes out of scope and can't be used anymore. */
    for (int i = 0; i < 5; i++)
    {
        if (height[i] > 170 && weight[i] < 50)
        {
            count ++;
        }
    }
    printf("Number of persons with height > 170 cm and weight < 50 kg: %d\n", count);

    return 0;
}