/* Write a C program to sort an array using BUBBLE SORT:
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

    int temp, flag;
    for (int i = 0; i < size - 1; i++) {
        flag = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0) break;
    }

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*OUTPUT
Enter the number of elements: 5
Enter 5 elements: 22 24 20 30 50
Sorted array: 20 22 24 30 50 
*/