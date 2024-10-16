#include <stdio.h>

// Function to calculate the factorial of a number
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to calculate combination nCr
long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to calculate permutation nPr
long long permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Enter the value of r: ");
    scanf("%d", &r);
    
    if (r > n) {
        printf("r cannot be greater than n.\n");
    } else {
        printf("nCr (Combination) = %lld\n", combination(n, r));
        printf("nPr (Permutation) = %lld\n", permutation(n, r));
    }
    
    return 0;
}
