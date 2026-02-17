/* 
Write a C Program to find the sum of digits of a number.
NAME: Aditya Bhardwaj
ROLL NO: 06
SECTION: F1
COURSE: BTech
BRANCH: CSE
*/


#include <stdio.h>

int main()
{
    int x = 0, n;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        x = n % 10;
        sum += x;
        n = n / 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
