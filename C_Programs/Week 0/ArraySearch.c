/*Develop a C program to count numbers greater than, less than or equal to a number 'K' in an array by accepting the value of K from the user.
NAME: ADITYA BHARDWAJ
ROLL NO: 06
SECTION: F1
COURSE: BTech
BRANCH: CSE
*/
#include <stdio.h>

int main() {
    int n, k, i, greater = 0, less = 0, equal = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of K: ");
    scanf("%d", &k);

    for (i = 0; i < n; i++) {
        if (arr[i] > k)
            greater++;
        else if (arr[i] < k)
            less++;
        else
            equal++;
    }

    printf("Greater than %d: %d\n", k, greater);
    printf("Less than %d: %d\n", k, less);
    printf("Equal to %d: %d\n", k, equal);

    return 0;
}


/*OUTPUT
Enter the number of elements: 3
Enter the elements:
3
2
1
Enter the value of K: 5
Greater than 5: 0
Less than 5: 3
Equal to 5: 0
*/
