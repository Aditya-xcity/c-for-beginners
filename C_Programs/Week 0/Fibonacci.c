/*Write a program in C to display the first N terms of the Fibonacci series using a user defined function.
NAME: ADITYA BHARDWAJ
ROLLNO: 06
SECTION:F1
COURSE: BTECH
BRANCH:CSE

*/
#include <stdio.h>
int nFibo(int n){
    int a = 0, b = 1, next;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    } 
}
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n); 
    nFibo(n);
    return 0;
}
/*OUTPUT
Enter the number of terms: 8
0 1 1 2 3 5 8 13
*/