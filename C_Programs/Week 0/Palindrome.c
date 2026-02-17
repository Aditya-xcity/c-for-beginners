/*
    WRITE A C PROGRAM TO PRINT FIBONACCI SERIES UP TO N TERMS
    NAME: ADITYA BHARDWAJ
    ROLL NO: 06
    SECTION: F1
    COURSE: BTECH
    BRANCH: CSE
*/

#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}

/*OUTPUT:
Enter the number of terms: 7
0 1 1 2 3 5 8 */