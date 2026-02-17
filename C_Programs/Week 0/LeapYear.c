/*
    WRITE A C PROGRAM TO PRINT THE FOLLOWING PATTERN
    OUTPUT:
    A
    AC
    ACE
    ACEG
    ACEGI
    NAME: ADITYA BHARDWAJ
    ROLL NO: 06
    SECTION: F1
    COURSE: BTECH
    BRANCH: CSE
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            printf("%c", ch);
            ch += 2;
        }
        printf("\n");
    }
}

/*
OUTPUT:
A
AC
ACE
ACEG
ACEGI
*/
