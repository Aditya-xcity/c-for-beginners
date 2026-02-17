/*
    WRITE A C PROGRAM TO PRINT THE FOLLOWING PATTERN
    OUTPUT:
    1
    12
    123
    1234
    12345
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
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

/*
OUTPUT:
1
12
123
1234
12345
*/
