/*Develop a C program to find minimum number in the array of N elements.
NAME: ADITYA BHARDWAJ
ROLL NO: 06
SECTION: F1
COURSE: BTech
BRANCH: CSE
*/
#include <stdio.h>

int main() {
    int n, i, min;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The minimum number in the array is: %d\n", min);

    return 0;
}
/*OUTPUT
Enter the number of elements in the array: 5
Enter 5 elements:5 4 3 2 1
The minimum number in the array is: 1
*/