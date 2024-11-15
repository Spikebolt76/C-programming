#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp1 = {1, "Jim Milton", 50000.0};

    // Print employee details
    printf("Employee Details:\n");
    printf("ID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Salary: %.2f\n", emp1.salary);

    return 0;
}
