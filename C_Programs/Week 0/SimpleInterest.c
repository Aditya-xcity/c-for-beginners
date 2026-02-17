/*
Write a C program to find the sum of even and odd numbers between 1 and 100.
NAME: Aditya Bhardwaj
ROLL NO: 06
SECTION: F1
COURSE: BTech
BRANCH: CSE
*/

#include <stdio.h>

int main()
{
    int even_sum = 0;
    int odd_sum = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            even_sum += i;
        }
        else
        {
            odd_sum += i;
        }
    }

    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);

    return 0;
}
