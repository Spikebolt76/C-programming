// Count simple interest using function :

#include <stdio.h>

int SimpInterest(int p, int r, int n)
{
    int interest = p * r * n / 100;
    return interest;
}
int main()
{
    int Prm, rate, time;
    printf("\nEnter the principle amount: ");
    scanf("%d", &Prm);
    printf("\nEnter the rate of interest: ");
    scanf("%d", &rate);
    printf("\nEnter the number of years: ");
    scanf("%d", &time);

    printf("\nSimple Interest = %d", SimpInterest(Prm, rate, time));

    return 0;
}