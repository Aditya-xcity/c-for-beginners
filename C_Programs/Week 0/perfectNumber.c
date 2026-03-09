/*
Q. Write a C program to check whether a number is a Perfect Number.

Name - ADITYA BHARDWAJ
Section - D2
Roll No - 07
Course – B TECH
Branch – CSE
*/

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i < num; i++) {
        if(num % i == 0) {
            sum = sum + i;
        }
    }

    if(sum == num)
        printf("The number is a Perfect Number\n");
    else
        printf("The number is not a Perfect Number\n");

    return 0;
}