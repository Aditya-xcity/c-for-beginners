/*
Q. Write a C program to convert a decimal number to binary.

Name - ADITYA BHARDWAJ
Section - D2
Roll No - 07
Course – B TECH
Branch – CSE
*/

#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while(num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary equivalent: ");

    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}