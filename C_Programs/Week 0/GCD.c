/* 
Write a C program to find the factorial of an integer & display it to the screen. The program should be able to compute the factorial of an integer greater than 10 as well.
NAME: Aditya Bhardwaj
ROLL NO: 06
SECTION: F1
COURSE: BTech
BRANCH: CSE
*/


#include <stdio.h>

int main() {
    long long int a = 1; 
    int n;
    int i;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        a = a * i;
    }

    printf("Factorial of %d is: %lld\n", n, a);  

    return 0;
}
