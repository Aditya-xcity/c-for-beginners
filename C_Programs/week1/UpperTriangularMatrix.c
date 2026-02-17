/*develop a c program to develop whether a given matrix of order mxn is an upper triangular matrix or not.
an upper trianglular matrix is the one in which all the elements below its prininpile diagonal are 0
  Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE

*/

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("enter element [%d][%d]",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }


for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d",matrix[i][j]);
          
        }
        printf("\n");
    }

 int flag = 1;
    for (int i = 1; i < m; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                flag = 0;
                break;
            }
        }
        if (!flag) {
            break;
        }
    }

    if (flag) {
        printf("The matrix is an upper triangular matrix.\n");
    } else {
        printf("The matrix is not an upper triangular matrix.\n");
    }

    return 0;
}

