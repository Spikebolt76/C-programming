#include <stdio.h>

//Count number of positive or negative number from an array of n numbers :-

int main()
{
    int n, i;
    int neg = 0, pos = 0;  //Number of negative and positive numbers, respectively

    printf("\nHow many number do you want to input? : ");
    scanf("%d", &n);

    int num[n];

    printf("\nEnter the numbers: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);

        if (num[i] >= 0){
            pos++;
        }
        else{
            neg++;
        }
    }
    printf("\nNumber of positive numbers: %d, Number of positive numbers: %d", pos, neg);
    return 0;
}