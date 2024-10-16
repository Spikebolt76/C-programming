//SCANF INPUT NUMBER FROM USER UNITL THEY DON'T ENTER -1. and take average of all the numbers except -1:-
//-----------------------------------------------------------------------------------------------------//

#include <stdio.h>

int main()
{
    int num = 0;
    float avg;
    int sum = 0;
    int count = 0;

    printf("\nEnter a number: ");    /*If we don't add printf scanf outside and we don't take assignment first in while loop, then it wil cosider -1 in the calculation which messes up the result*/
    scanf("%d", &num);

    while(num != -1)
    {
        sum = sum + num;
        count++;

        printf("\nEnter a number: ");
        scanf("%d", &num);
    }

    // Check if any valid numbers were entered to avoid division by zero
    if(count == 0) 
    {
        printf("\nNo valid numbers were entered.");
    } 
    else 
    {
        avg = (float) sum / count;  // Calculate average
        printf("\nThe average of all the numbers (except -1) is: %f", avg);
    }
    return 0;
}

/*
// Another method is with infinite while loop: while(1):
//----------------------------------------------------//

int main()
{
    int num;
    float avg;
    int sum = 0;
    int count = 0;

    while (1)
    {
        printf("\nEnter a number: ");
        scanf("%d", &num);

         if (num == -1)
        {
            // Check if any valid numbers were entered
            if (count == 0) 
            {
                printf("\nNo valid numbers were entered.");
            }
             else 
             {
                avg = (float)sum / count;
                printf("\nThe average of all the numbers (except -1) is: %f", avg);
            }
            break;
        }
        else
        {
            sum = sum + num;
            count++;
        }
    }
    return 0;
}
*/