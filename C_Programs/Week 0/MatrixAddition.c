/*Develop a C program to initialize an array of size 'N' by 
reading integers from the user, and find all the palindrome numbers present in it.
Store all the palindrome numbers in another array and display them in the output.
NAME: ADITYA BHARDWAJ
ROLL NO: 06
SECTION: F1
COURSE: BTech
BRANCH: CSE
*/
#include <stdio.h>

int main() {
    int n, i, c = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], p[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        int orig = arr[i], rev = 0, rem;
        while (orig != 0) {
            rem = orig % 10;
            rev = rev * 10 + rem;
            orig /= 10;
        }
        if (rev == arr[i]) {
            p[c++] = arr[i];
        }
    }

    printf("Palindrome numbers in the array:\n");
    for (i = 0; i < c; i++) {
        printf("%d ", p[i]);
    }
    if (c == 0) {
        printf("No palindrome numbers found.");
    }
    printf("\n");

    return 0;
}

/*OUTPUT
Enter the size of the array: 3
Enter the elements of the array:
151 121 123
Palindrome numbers in the array:
151 121 
*/