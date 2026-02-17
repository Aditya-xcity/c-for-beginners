/*wap to swap all the elemts about the principle diagonal of a matrix 
a11 a12 a13 a11 a21 a31
a21 a22 a23 a12 a22 a32
a31 a32 a33 a13 a23 a33
*/

#include<stdio.h>

int main() {
    int n;

    // Ask for the matrix size
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Swap the elements about the principal diagonal
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  // Only elements above the diagonal
            // Swap matrix[i][j] and matrix[j][i]
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Print the matrix after swapping
    printf("Matrix after swapping elements about the principal diagonal:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
