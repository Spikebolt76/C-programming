#include "customLib_01.h"
#include <stdbool.h>
#include <math.h>

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false; 
    }
    else
    {
        for (int i = 2; i*i <= num; i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

bool isArmstrong(int num)
{
    int expnt = 0, sum = 0;
    int buffer = num;

    while (buffer != 0)
    {
        buffer /= 10;
        expnt++;
    }

    buffer = num;
    while (buffer != 0)
    {
        sum += (int)pow(buffer % 10, expnt);
        buffer /= 10;
    }

    if(num == sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isPerfect(int num)
{
    int count;
    int sum = 0;

    for (count = 1; count < num; count++)    //count== 0 would result in an infinite loop, thus take count == 1
    {
        if (num % count == 0)
        {
            sum += count;
        }
    }

    if (sum == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}