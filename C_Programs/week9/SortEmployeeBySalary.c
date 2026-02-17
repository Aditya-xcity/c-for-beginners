/*
2. Develop a C program to read the following details of N employees into
appropriate data storage. EmpNo, Name and Salary. Display all the details of the
employees in the descending order of their salary to the console.

  Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE
*/

#include <stdio.h>
#include <string.h>

struct Employee
{
    int empNo;
    char name[50];
    float salary;
};

void sortDescending(struct Employee e[], int n)
{
    struct Employee temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (e[i].salary < e[j].salary)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee e[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter details of Employee %d\n", i + 1);
        printf("EmpNo: ");
        scanf("%d", &e[i].empNo);
        printf("Name: ");
        scanf(" %[^\n]", e[i].name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    sortDescending(e, n);

    printf("\n--- Employee Details (Sorted by Salary DESC) ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("EmpNo: %d, Name: %s, Salary: %.2f\n", e[i].empNo, e[i].name, e[i].salary);
    }

    return 0;
}

/*
 Sample output:
Enter number of employees: 3
Enter details of Employee 1
EmpNo: 1
Name: aditya
Salary: 8
Enter details of Employee 2
EmpNo: 2
Name: pawan
Salary: 15
Enter details of Employee 3
EmpNo: ashish
Name: Salary: 0

--- Employee Details (Sorted by Salary DESC) ---
EmpNo: 2, Name: pawan, Salary: 15
EmpNo: 1, Name: aditya, Salary: 8
EmpNo: -850702364, Name: ashish, Salary: 0.00
*/
