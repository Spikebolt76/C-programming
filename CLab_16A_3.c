#include <stdio.h>

int main()
{
    int students[20][2];
    int i;

    printf("Enter roll number and marks for 20 students:\n");
    for (i = 0; i < 20; i++)
    {
        printf("Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &students[i][0]); // Roll number is stored in column 0

        printf("Enter Marks: ");
        scanf("%d", &students[i][1]); // Marks are stored in column 1
    }

    printf("\nRoll Number and Marks of Students:\n");
    printf("Roll Number\tMarks\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d\t\t%d\n", students[i][0], students[i][1]);
    }

    return 0;
}
