#include <stdio.h>

int main(){

    //=> switch = A more efficient alternative to using many "else if" statements
    //          allows a value to be tested for equality against many cases
    //=> It is just like if else, but we can make n amount of (multiple) decisions. And its execution is faster than else..if.
    //=> If no cases match, we can add a line "default:" case, so that would be executed.
    //=> Putting a break after the end of each case is essential.
    
   char grade;

   printf("\nEnter a letter grade: ");
   scanf("%c", &grade);

   switch(grade){
      case 'A':
         printf("perfect!\n");
         break;
      case 'B':
         printf("You did good!\n");
         break;
      case 'C':
         printf("You did okay!\n");
         break;
      case 'D':
         printf("At least it's not an F!\n");
         break;
      case 'F':
         printf("YOU FAILED!\n");
         break;
      default:
         printf("Please enter only valid grades");
   }

    return 0;
}