#include <stdio.h>

int main() 
{
    int a, b, c, largest_Num;
    
    printf("Enter numbers a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    largest_Num = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    
    printf("The largest number is: %d\n", largest_Num);
    
    return 0;
}

/* (a > b) ? ((a > c) ? (printf("%d is larger than %d and %d\n", a, b, c), a) : (printf("%d is larger than %d and %d\n", c, a, b), c)) : ((b > c) ? (printf("%d is larger than %d and %d\n", b, a, c), b) : (printf("%d is larger than %d and %d\n", c, a, b), c))
    ); */