/*
    WRITE A C PROGRAM TO FIND WHETHER A GIVEN NUMBER IS AN ARMSTRONG NUMBER OR NOT
    NAME: ADITYA BHARDWAJ
    ROLL NO: 06
    SECTION: F1
    COURSE: BTECH
    BRANCH: CSE
*/

#include <stdio.h>

int main() {
    int n, orig, rem, res = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);
    orig = n;

    while (orig != 0) {
        rem = orig % 10;
        res += rem * rem * rem;
        orig /= 10;
    }

    if (res == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);

    return 0;
}

/*OUTPUT
Enter a three-digit integer: 153
153 is an Armstrong number.*/