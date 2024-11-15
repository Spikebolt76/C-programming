/* Given an integer array nums and an integer val, remove all occurrences of val in nums inplace.
The order of the elements may be changed. Then return the number of elements in
nums which are not equal to val.
Consider the number of elements in nums which are not equal to val be k, to get accepted,
you need to do the following things:
Change the array nums such that the first k elements of nums contain the elements which
are not equal to val. The remaining elements of nums are not important as well as the size
of nums.
Return k. */
#include <stdio.h>

int main()
{
    int nums[100] = {14, 12, 76, 42, 14, 14, 23, 14, 89, 69, 14, 37};
    int val = 14;
    int i = 0, j = 0;      //varibles for iterations
    int n = 12;  //number of the elements in the integer array nums[]
    int k = 0;   //number of elements that are not equal to val

    for (i = 0; i < n; i++)
    {
        if (nums[i] != val){
            k++;
        }
    }
    int temp = n - 1;
    for (i = 0; i < n; i++)
    {
        if (nums[i] == val)
        {
            for (j = i; j < n - 1; j++)
            {
                nums[j] = nums[j + 1];
            }
            nums[temp] = val;
            temp--;
            i--;
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\nValue of k = %d", k);
}