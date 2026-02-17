/* Write a C program to sort an array using SELECTION SORT:
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

    int temp, idx;
    for (int l = 0; l < size - 1; l++) {
        idx = l;  
        for (int i = l + 1; i < size; i++) {
            if (arr[i] < arr[idx]) {  
                idx = i;
            }
        }
                temp = arr[l];
        arr[l] = arr[idx];
        arr[idx] = temp;
    }

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*OUTPUT
Enter the number of elements: 5
Enter 5 elements: 55 66 44 77 33
Sorted array: 33 44 55 66 77 
*/