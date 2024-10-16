// Check whether number is even number or odd number using conditional operator

// pointer and assign (thefck?) method:--
//--------------//

#include <stdio.h>

int main()
{
    int num;
    char result1[] = "Even";
    char result2[] = "Odd";

    printf("\nEnter a Number: ");
    scanf("%d", &num);

    char *ness = (num % 2 == 0) ? result1 : result2;

    printf("The number is %s.\n", ness);
}

/* Direct printf method:--
//-----------------------//

 int main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Using conditional operator to check even or odd
    (num % 2 == 0) ? printf("%d is an even number.\n", num) : printf("%d is an odd number.\n", num);

    return 0;
}
 */