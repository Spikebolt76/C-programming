#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20,..., 300 */

   int main()
   {
    float fahr, celsius;
    int lower, upper, step; 

    lower = 0;         // lower limit of temperature table in fahrenheit
    upper = 300;       // upper limit of '' ''  ''  ''  '' ''' '' '''
    step = 20;         // step size

    // Print the heading
    printf("Fahrenheit to Celsius Conversion Table\n");
    printf("--------------------------------------\n");
    printf("Fahrenheit\tCelsius\n");
    printf("--------------------------------------\n");


    fahr = lower;  //assigning fahr, value of lower will convert data type of lower to float, before any operation is done.

    /* If an arithmatic operator has integer operands, an integer operation is performed. 
      If an arithmatic operator has one floating ponint operand and one integer operand, 
      the integer will be converted to  floating point before the operation has done. */

    while (fahr <= upper)
    {
        celsius = 5.0 / 9.0 * (fahr-32.0);          /*Using integer type for varibles like fahr and celsius 
                                                    causes 5/9 to be zero because integer data type trauncates the faction part.*/
        printf("%4.2f\t\t%4.2f\n", fahr, celsius);     /*But if we take 5.0/9.0 in float type, it won't trauncate it to zero.*/    
        fahr = fahr + step;
    }
    return 0;
   }
