/* 
Write a program in C to find the prime numbers between a range of integers read by the user.
NAME: Aditya Bhardwaj
ROLL NO: 06
SECTION: F1
COURSE: BTech
BRANCH: CSE
*/



#include<stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    for(int i = num1; i <= num2; i++) {
        int count = 0;


        for(int j = 1; j <= i; j++) {
            if(i % j == 0) {
                count++;
            }
        }

        if(count == 2) {
            printf("%d ", i);
        }
    }

    return 0;
}
