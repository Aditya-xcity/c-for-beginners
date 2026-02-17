// Question: Write a C program to test whether a given matrix is an identity matrix or not
/*
Name - ADITYA BHARDWAJ
Section - D2
Roll No - 07
Course – B TECH
Branch – CSE
*/

#include <stdio.h>

int main() {
    int n, i, j, isIdentity = 1;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j && matrix[i][j] != 1) {
                isIdentity = 0;
                break;
            }
            if(i != j && matrix[i][j] != 0) {
                isIdentity = 0;
                break;
            }
        }
    }

    if(isIdentity)
        printf("The matrix is an Identity Matrix.\n");
    else
        printf("The matrix is NOT an Identity Matrix.\n");

    return 0;
}
