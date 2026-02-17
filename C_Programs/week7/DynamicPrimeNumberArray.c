/*Program 21:  Write a C program to dynamically allocate memory for an array to input N integers and then create a second dynamically allocated array to store only the prime numbers of the N integer array. Print the resultant array and free all the allocated memory.
  Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE
*/

 #include <stdio.h>
#include <stdlib.h>
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
int main() {
    int n, count = 0;
    printf("Enter Number Of Elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) {
        printf("Memory Allocation Failed\n");
        return 1;
    }
    printf("Enter %d Integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int *primeArr = (int*)malloc(n * sizeof(int));
    if (!primeArr) {
        printf("Memory Allocation Failed\n");
        free(arr);
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            primeArr[count++] = arr[i];
        }
    }
    printf("Prime Numbers In The Array: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", primeArr[i]);
    }
    printf("\n");
    free(arr);
    free(primeArr);
    return 0;
}
/*
OUTPUT
Enter Number Of Elements: 5
Enter 5 Integers: 74 85 13 7 9
Prime Numbers In The Array: 13 7  
*/

