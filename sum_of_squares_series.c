#include <stdio.h>

//Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n :-

int main()
{
    int N, term, sqr, sum;
    sum = 0;
    sqr = 0;
    
    printf("\nEnter the value of N: ");
    scanf("%d", &N);

    printf ("\nThe series: ");

    for (term = 1; term <= N; term++)
    {
        sqr = term * term;
        sum += sqr;

        if (term < N) 
        {
            printf("%d + ", sqr);
        } 
        else 
        {
            printf("%d", sqr);  // Print without "+" for the last term
        }
    }

    printf("\nThe sum of the series: %d\n", sum);
    return 0;
}

//Optimized version :-

// #include <stdio.h>

// int main() {
//     int n = 6; 
//     int sum = 0;

//     for (int i = 1; i <= n; i++) {
//         sum += i * i; 
//     }
//     printf("The sum of the series 1 + 4 + 9 + ... + %d is: %d\n", n * n, sum);

//     return 0;
// }
