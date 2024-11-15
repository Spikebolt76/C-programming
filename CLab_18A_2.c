// Find maximum and minimum between two numbers using function :

# include <stdio.h>

int maximum(int x, int y)
{
    int max = x > y ? x : y; 
    return max;
}

int minimum(int x, int y)
{
    int min = x > y ? y : x;
    return min;
}

int main()
{
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    printf("maximum = %d, minimum = %d", maximum(a, b), minimum(a, b));
    return 0;
}