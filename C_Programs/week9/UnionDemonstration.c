/*
3. Write a C program to define a union with fields int id, float salary, and char
name[20], input values for each field, print the stored values, and demonstrate
how the union can hold only one value at a time by modifying and printing the
fields.

  Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE
*/

#include <stdio.h>
#include <string.h>

union Employee
{
    int id;
    float salary;
    char name[20];
};

int main()
{
    union Employee emp;

    emp.id = 101;
    printf("ID stored: %d\n", emp.id);

    emp.salary = 55000.75;
    printf("Salary stored: %.2f\n", emp.salary);

    strcpy(emp.name, "Aditya");
    printf("Name stored: %s\n", emp.name);

    // Showing the overwrite behavior
    printf("\n--- Union overwrite demo ---\n");
    printf("Current ID: %d (corrupted)\n", emp.id);
    printf("Current Salary: %5.2f (corrupted)\n", emp.salary);
    printf("Current Name: %s (valid)\n", emp.name);

    return 0;
}

/*
Sample Output:
ID stored: 101
Salary stored: 55000.75
Name stored: Aditya

--- Union overwrite demo ---
Current ID: 1633771873 (corrupted)
Current Salary: 0.000000 (corrupted)
Current Name: Aditya (valid)
*/
