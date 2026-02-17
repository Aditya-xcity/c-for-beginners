/*Program 22:Develop a program in C to read a structure in the main program of an Employee
that contains Name, EmpCode and Salary as the members. Write a function to
display the details of the employee in the following format.
Name- ADITYA BHARDWAJ
Section- F1
Roll No- 06
Course – B TECH
Branch – CSE
*/

#include <stdio.h>
#include <string.h>

struct Employee
{
    char Name[50];
    char EmpCode[20];
    float Salary;
};

void displayEmployee(struct Employee emp)
{
    printf("\nEmployee Details:\n");
    printf("-----------------\n");
    printf("Name      : %s\n", emp.Name);
    printf("Emp Code  : %s\n", emp.EmpCode);
    printf("Salary    : %.2f\n", emp.Salary);
}

int main()
{
    struct Employee emp;

    printf("Enter Employee Name: ");
    fgets(emp.Name, sizeof(emp.Name), stdin);
    emp.Name[strcspn(emp.Name, "\n")] = '\0';

    printf("Enter Employee Code: ");
    fgets(emp.EmpCode, sizeof(emp.EmpCode), stdin);
    emp.EmpCode[strcspn(emp.EmpCode, "\n")] = '\0';

    printf("Enter Salary: ");
    scanf("%f", &emp.Salary);

    displayEmployee(emp);

    return 0;
}

/*OUTPUT
Enter Employee Name: ADITYA
Enter Employee Code: 1234
Enter Salary: 500000

Employee Details:
-----------------
Name      : ADITYA
Emp Code  : 1234
Salary    : 500000
*/
