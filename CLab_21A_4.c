#include <stdio.h>

// Define the structure for Student
struct Student
{
    char name[50];
    float percentage;
    int age;
};

int main()
{
    // Declare an array of 5 Student structures
    struct Student students[5];

    // Read data for 5 students
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin); // Read name

        printf("Enter percentage: ");
        scanf("%f", &students[i].percentage); // Read percentage

        printf("Enter age: ");
        scanf("%d", &students[i].age); // Read age

        // To clear the buffer after reading age
        getchar();
    }

    // Display the details of the students
    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s", students[i].name);
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("Age: %d\n", students[i].age);
    }

    return 0;
}
