#include <stdio.h>

/* Read marks of five subjects. Calculate percentage and print class accordingly. Fail below
35, Pass Class between 36 to 45, Second Class between 46 to 60, First Class between 61 to
70, Distinction if more than 70. */

int main()
{
    int Math, Science, English, History, CS; //Marks of each subject, total 5 of them. variable total_marks suggests the marks student got in that subject
    float percentage, total_marks;

    printf("Enter Math marks: ");
    scanf("%d", &Math);

    printf("Enter Science marks: ");
    scanf("%d", &Science);

    printf("Enter English marks: ");
    scanf("%d", &English);

    printf("Enter History marks: ");
    scanf("%d", &History);

    printf("Enter CS marks: ");
    scanf("%d", &CS);

    total_marks = Math + Science + English + History + CS;

    percentage = (total_marks * 100) / 500 ;  //where 500 is total marks of all subjects

    if (percentage < 35)
    {
        printf("Student has failed with %f percentage.\n", percentage);

    }
    else if (percentage < 45)
    {
        printf("Student has passed with %f percentage.\n", percentage);
    }
    else if (percentage < 60)
    {
        printf("Student has passed with Second Class, %f percentage.\n", percentage);
    }
    else if (percentage < 70)
    {
        printf("Student has passed with First Class, %f percentage.\n", percentage);
    }
    else
    {
        printf("Student has passed with Outstanding Class, %f percentage.\n", percentage);
    }

    return 0;

}