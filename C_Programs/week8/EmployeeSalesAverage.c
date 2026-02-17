/*Program 24 :Develop a C program to find total and average sales of 'N' employees by reading
the details such as empcode, name, and sales using array of structures.
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
    char empcode[20];
    char name[50];
    float sales;
};

int main()
{
    int n;
    float totalSales = 0, averageSales;

    printf("Enter the number of employees: ");
    scanf("%d", &n);
    getchar(); // clear input buffer

    struct Employee employees[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for Employee %d\n", i + 1);

        printf("Emp Code: ");
        fgets(employees[i].empcode, sizeof(employees[i].empcode), stdin);
        employees[i].empcode[strcspn(employees[i].empcode, "\n")] = '\0';

        printf("Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0';

        printf("Sales: ");
        scanf("%f", &employees[i].sales);
        getchar();

        totalSales += employees[i].sales;
    }

    averageSales = totalSales / n;

    // Display employee data
    printf("\n%-10s %-20s %-10s\n", "EmpCode", "Name", "Sales");
    printf("----------------------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("%-10s %-20s %-10.2f\n", employees[i].empcode, employees[i].name, employees[i].sales);
    }

    // Print total and average
    printf("\nTotal Sales: ₹%.2f\n", totalSales);
    printf("Average Sales: ₹%.2f\n", averageSales);

    return 0;
}

/*
OUTPUT
Enter the number of employees: 3

Enter details for Employee 1
Emp Code: 1
Name: ASHISH
Sales: 6

Enter details for Employee 2
Emp Code: 2
Name: ABHA
Sales: 7

Enter details for Employee 3
Emp Code: 3
Name: ADITYA
Sales: 8

EmpCode    Name                 Sales
----------------------------------------------
1          ASHISH               6.00
2          ABHA                 7.00
3          ADITYA               8.00

Total Sales: 21.00
Average Sales:7.00

Process returned 0 (0x0)   execution time : 34.028 s
Press any key to continue.

*/
