/* Write a C program to find a target number in a user-defined array using Binary Search 
NAME: ADITYA BHARDWAJ
ROLL NO: 06
SECTION: F1
COURSE: BTech
BRANCH: CSE

*/

#include<stdio.h>

int main() {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d sorted elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the target number to search: ");
    scanf("%d", &target);

    int low = 0, high = size - 1, mid, idx = -1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == target) {
            idx = mid; 
            break;
        }
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (idx == -1) {
        printf("The Target %d Not Found\n", target);
    } else {
        printf("The Target %d Found At Index: %d\n", target, idx);
    }

    return 0;
}

/*OUTPUT
Enter 5 sorted elements: 11 22 33 44 55 
Enter the target number to search: 33
The Target 33 Found At Index: 2

Enter 4 sorted elements: 33 22 11 00   
Enter the target number to search: 000
The Target 0 Not Found
*/
