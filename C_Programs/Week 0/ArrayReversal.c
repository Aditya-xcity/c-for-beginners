/*Write a C program to read elements in an array, later store those elements
in another new array in reverse order. Print the new array.
NAME: ADITYA BHARDWAJ
ROLL NO: 06
SECTION: F1
COURSE: BTech
BRANCH: CSEW
*/
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], rev[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < n; i++) {
        rev[i] = arr[n - i - 1];
    }

    printf("Reversed array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }
    printf("\n");

    return 0;
}

/*OUTPUT
Enter the elements:
3
3
2
1
2
Reversed array:
2 1 2 3 3
*/
