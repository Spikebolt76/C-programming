#include <stdio.h> 

int main()
{
    int x;  //declaration
    x = 24;   //initialization or assign
    //or
    int y = 12;  //declaration + initialization

    int age = 17;  //integer
    
    float cgpa = 9.5;  //floating point number: A number that contains a decimal portion 

    char grade = 'O';  /*single character.  remember tha while initializing a char variable, 
                         you need to put the char in single quote '' */
                         
    char name[] = "Spikebolt";  //array of characters

    printf("Oi Oi %s.\n", name);
    printf("Are ya that %d y/o bloke?\n", age);
    printf("You must ace ur exams with %c grade!\n", grade);
}
