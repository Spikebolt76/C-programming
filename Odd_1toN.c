#include <stdio.h>

int main() 
{
    int n, i = 1;  // i is initialized to 1 because we want to start from 1

    printf("Enter the value of n: ");
    scanf("%d", &n);

    do 
    {
        if (i % 2 != 0) 
        {  
            printf("%d ", i);
        }
        i++;  
    } 
    while (i <= n);  

    return 0;
}
