/*
    WRITE A C PROGRAM TO PRINT THE FOLLOWING PATTERN
    OUTPUT:
    1
    01
    101
    0101
    10101
    NAME: ADITYA BHARDWAJ
    ROLL NO: 06
    SECTION: F1
    COURSE: BTECH
    BRANCH: CSE
*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}

/*
OUTPUT:
1
01
101
0101
10101
*/
