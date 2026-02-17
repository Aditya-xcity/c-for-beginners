/*develop a c program to read a sqaure matrix mxn and 
find the sum of the elements arouund the peripheral display their final sum to the console

eg
1 2 4
4 5 6 
1 1 1

1+2+4+6+1+1+1*/

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

  for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
           printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }




    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                sum += matrix[i][j];
            }
        }
    }

    printf("The sum of the elements around the periphery is: %d\n", sum);

    return 0;
}