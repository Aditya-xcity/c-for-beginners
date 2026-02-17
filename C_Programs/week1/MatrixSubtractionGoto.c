/*write a c program to read two square matrix of non zero element of order mxn and then 
subtract the elements of the second matrix from the elements of first matrix and 
then display the resultant matrix to the console

b2-b1*/

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &m, &n);

    int matrix1[m][n], matrix2[m][n], result[m][n];

    //entering elements of first matrix
    printf("Enter the elements of the 1st matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            repeat1:
            printf("enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
            if (matrix1[i][j] == 0) {
                printf("element cannot be zero\n");
                goto repeat1;
            }
        }
    }

    //entering elements of second matrix
    printf("Enter the elements of the 2nd matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            repeat2:
            printf("enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
            if (matrix2[i][j] == 0) {
                printf("element cannot be zero\n");
                goto repeat2;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("The resultant matrix after subtraction is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

