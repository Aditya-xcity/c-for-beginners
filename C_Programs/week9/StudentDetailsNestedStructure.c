/*
1. Develop a C program to display Name, Roll Number, Date of Birth and Date of
Admission details of a student read from the keyboard where the date of birth
and date of admission further consists of three members such as day, month and
year in a separate structure. Implement using a C structure.
*/

#include <stdio.h>

struct Date
{
    int day, month, year;
};

struct Student
{
    char name[50];
    int rollNo;
    struct Date dob;
    struct Date doa;
};

int main()
{
    struct Student s;

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);
    printf("Enter Date of Birth (dd mm yyyy): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);
    printf("Enter Date of Admission (dd mm yyyy): ");
    scanf("%d %d %d", &s.doa.day, &s.doa.month, &s.doa.year);

    printf("\n--- Student Info ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNo);
    printf("Date of Birth: %02d-%02d-%04d\n", s.dob.day, s.dob.month, s.dob.year);
    printf("Date of Admission: %02d-%02d-%04d\n", s.doa.day, s.doa.month, s.doa.year);

    return 0;
}

/*
 Sample Output:
Enter Name: Aditya Bhardwaj
Enter Roll Number: 6
Enter Date of Birth (dd mm yyyy): 03 09 2004
Enter Date of Admission (dd mm yyyy): 01 08 2022

--- Student Info ---
Name: Aditya Bhardwaj
Roll Number: 6
Date of Birth: 03-09-2005
Date of Admission: 01-08-2022
*/
