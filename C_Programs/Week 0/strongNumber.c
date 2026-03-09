/*
Q. Write a C program to check whether a number is a Strong Number.

Name - ADITYA BHARDWAJ
Section - D2
Roll No - 07
Course – B TECH
Branch – CSE
*/

#include <stdio.h>

int main() {
    int num, temp, remainder, factorial, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0) {
        remainder = temp % 10;
        factorial = 1;

        for(int i = 1; i <= remainder; i++) {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        temp = temp / 10;
    }

    if(sum == num)
        printf("The number is a Strong Number\n");
    else
        printf("The number is not a Strong Number\n");

    return 0;
}