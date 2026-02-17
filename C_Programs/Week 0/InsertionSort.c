/* Write a C program to sort an array using INSERTION SORT:
   User will input the array elements.
   NAME: ADITYA BHARDWAJ
   ROLLNO: 06
   SECTION: F1
   COURSE: BTECH
   BRANCH: CSE
*/

#include<stdio.h>

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int temp, j;
    for (int i = 1; i < size; i++) {  // Start from the second element
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) {  // Shift elements to make space
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;  // Insert the element at the correct position
    }

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*OUTPUT
Enter the number of elements: 5
Enter 5 elements: 40 30 50 20 60
Sorted array: 20 30 40 50 60
*/