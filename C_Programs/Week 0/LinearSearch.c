/* Write a C program to find a target number in a user-defined array using Linear Search:
   NAME: ADITYA BHARDWAJ
   ROLLNO: 06
   SECTION: F1
   COURSE: BTECH
   BRANCH: CSE
*/

#include<stdio.h>

int main() {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the target number to search: ");
    scanf("%d", &target);

    int index = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            index = i; // Target found
            break;
        }
    }

    if (index == -1) {
        printf("The Target %d Not Found\n", target);
    } else {
        printf("The Target %d Found At Index: %d\n", target, index);
    }

    return 0;
}


/*OUTPUT
Enter 5 elements: 55 44 33 77 22
Enter the target number to search: 33
The Target 33 Found At Index: 2

Enter 3 elements: 22 33 44
Enter the target number to search: 333
The Target 333 Not Found
*/