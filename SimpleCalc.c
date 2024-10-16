#include <stdio.h>

int main()
{
    int a, b, Ans;
    char Operation;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the desired operation: ");
    scanf(" %c", &Operation);
 
    if (Operation == 'A')  //A => Addition
    {
        Ans = a + b;
        printf("%d + %d = %d", a, b, Ans);
    }
    else if (Operation == 'S')    //S => Substraction
    {
        Ans = a - b;
        printf("%d - %d = %d", a, b, Ans);
    }
    else if (Operation == 'M')   //M => Multiplication
    {
        Ans = a * b;
        printf("%d * %d = %d", a, b, Ans);
    }
    else if (Operation == 'D')  //D => Division
    {
        Ans = a / b;
        printf("%d / %d = %d", a, b, Ans);
    }

    return 0;
}