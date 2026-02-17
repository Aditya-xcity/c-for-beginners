/*
    WRITE A C PROGRAM TO PRINT THE FOLLOWING PATTERN
    OUTPUT:
    A
    CE
    GIK
    MOQS
    NAME: ADITYA BHARDWAJ
    ROLL NO: 06
    SECTION: F1
    COURSE: BTECH
    BRANCH: CSE
*/

#include <stdio.h>

int main() {
    char ch = 'A';
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch += 2;
        }
        printf("\n");
    }
}

/*
OUTPUT:
A
CE
GIK
MOQS
*/
