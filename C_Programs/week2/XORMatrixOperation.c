// XOR operation on 2 matrices
// 1 ^ 1 = 0
// 0 ^ 0 = 0
// 1 ^ 0 = 1
// 0 ^ 1 = 1


/*  Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE*/

#include<stdio.h>

int main() {
    int n;
    printf("Enter The Size Of Array: ");
    scanf("%d", &n);

    int arr[n][n];
    int brr[n][n];
    int crr[n][n];
    int input;

    // Input for the first matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            repeat1:
            printf("Enter The Element Of First Matrix At %d %d: ", i+1, j+1);
            scanf("%d", &input);
            if (input != 0 && input != 1) {
                printf("Please Enter A Zero Or One As Element\n");
                goto repeat1;
            } else {
                arr[i][j] = input;
            }
        }
    }

    // Input for the second matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            repeat2:
            printf("Enter The Element Of Second Matrix At %d %d: ", i+1, j+1);
            scanf("%d", &input);
            if (input != 0 && input != 1) {
                printf("Please Enter A Zero Or One As Element\n");
                goto repeat2;
            } else {
                brr[i][j] = input;
            }
        }
    }

    // XOR operation on matrices
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            crr[i][j] = arr[i][j] ^ brr[i][j];
        }
    }

    // Printing matrices
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", crr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
