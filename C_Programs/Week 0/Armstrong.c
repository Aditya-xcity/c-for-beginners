/*
    WRITE A C PROGRAM TO ACCEPT A NUMBER FROM THE USER AND CHECK WHETHER IT IS A PALINDROME OR NOT
    NAME: ADITYA BHARDWAJ
    ROLL NO: 06
    SECTION: F1
    COURSE: BTECH
    BRANCH: CSE
*/

#include <stdio.h>

int main()
{
    int n, rev = 0, rem, orig;

    printf("Enter an integer: ");
    scanf("%d", &n);

    orig = n;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if (orig == rev)
        printf("%d is a palindrome.\n", orig);
    else
        printf("%d is not a palindrome.\n", orig);

    return 0;
}
/*OUTPUT:
Enter an integer: 121
121 is a palindrome.*/