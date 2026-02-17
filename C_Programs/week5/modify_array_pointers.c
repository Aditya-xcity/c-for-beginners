/*
Write a C program to accept N integers from the user into an array. If any
integer is positive then subtract 2 from it, if integer is negative add 1 to it and
if zero then do nothing. Implement a UDF using a pointer to perform these
operations and finally display the modified array to the screen in the calling
program.
 Sample Input:
 1 3 -5 0 8 -4 -1
 Output:
 -1 1 -4 0 6 -3 0

*/

#include <stdio.h>


void modifyArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) > 0) {
            *(arr + i) -= 2;
        } else if (*(arr + i) < 0) {
            *(arr + i) += 1;
        }

    }
}

int main() {
    int n;


    printf("Enter the number of integers (N): ");
    scanf("%d", &n);

    int arr[n];


    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    modifyArray(arr, n);


    printf("Modified Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/*output*/
/*
Enter the number of integers (N): 5
Enter 5 integers:
1
2
3
4
5
Modified Array:
-1 0 1 2 3

Enter the number of integers (N): 3
Enter 3 integers:
9
8
6
Modified Array:
7 6 4





*/




