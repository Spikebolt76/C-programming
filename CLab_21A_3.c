#include <stdio.h>

// Define a Structure
struct Employee
{
    int id;
    char name[50];
    float salary;
};

// Define a Union
union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    // Structure Example
    struct Employee emp1;
    emp1.id = 101;
    snprintf(emp1.name, sizeof(emp1.name), "John Doe");
    emp1.salary = 50000.50;

    // Union Example
    union Data data1;
    data1.i = 10;
    data1.f = 220.5;
    snprintf(data1.str, sizeof(data1.str), "Hello");

    // Displaying structure values
    printf("Structure - Employee details:\n");
    printf("ID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Salary: %.2f\n\n", emp1.salary);

    // Displaying union values
    printf("Union - Data values:\n");
    printf("Integer: %d\n", data1.i);  // Will show 10 as the last value assigned
    printf("Float: %.2f\n", data1.f);  // Will show 220.50
    printf("String: %s\n", data1.str); // Will show "Hello"

    return 0;
}
