#include <stdio.h>

//Print value and address of a variable :

int main()
{
    int var;
    var = 37;

    int *ptr;  
    int **pptr;

    ptr = &var;  //address of variable  // ptr holds the address of 'var'
    pptr = &ptr;   //address of ptr using 'address of operator &'   

    printf("\nValue of var = %d", var);
    printf("\nValue available at *ptr = %d", *ptr);  //// *ptr gives the value at the address ptr is pointing to, which is 37
    printf("\nValue available at *pptr = %d", **pptr);
    printf("\nAddress of variable var = %d", ptr);
    printf("\nAddress of Pointer Variable ptr = %d", pptr);

    return 0;
}