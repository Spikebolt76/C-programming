#include <stdio.h>

/*Incorrect initialization and incrementing of variables:

The variable I is not properly reset between iterations of the inner while loop, causing the loop to behave incorrectly after the first iteration.
The variable Temp should be reset before starting the inner loop to properly accumulate the result for the current iteration.*/

int main()
{
    int I, Result, N, Expnt, Temp;
    
    Result = 1; // Start with N^0 = 1
    Expnt = 1;  // Exponent starts from 1


    printf("Enter Number: ");
    scanf("%d", &N);

// Outer loop for raising N to the power N
    while(Expnt <= N)
    {
        Temp = 0;  // Reset Temp for the new multiplication
        I = 1;     // Reset I for counting additions

        // Inner loop to simulate multiplication by repeated addition
        while(I <= Result)
        {
            Temp = Temp + N;   // Add Result to Temp N times
            I++;
        }
        Result = Temp;   // Update Result after simulated multiplication
        Expnt++;
    }
    
    // Output the final result
    printf("%d raised to %d is: %d\n", N, N, Result);

    return 0;
}                                                                                        