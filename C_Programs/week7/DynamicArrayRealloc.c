/*Program 19: Write a C program to dynamically allocate memory for an integer array of size N. allow the user to input N integers, resize the array to N+M using realloc to add M more integers, compute the sum of all N+M integers, and properly release the allocated memory.  */

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, m;
    printf("Enter Size of Array: ");
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    if (!arr) {
        printf("Memory Allocation Failed\n");
        return 1;
    }
    printf("Enter %d Elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nElements Before Expansion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nEnter Additional Elements Count: ");
    scanf("%d", &m);
    int* temp = realloc(arr, (n + m) * sizeof(int));
    if (!temp) {
        printf("Memory Reallocation Failed\n");
        free(arr);
        return 1;
    }
    arr = temp;
    printf("Enter %d More Elements: ", m);
    for (int i = n; i < n + m; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nElements After Expansion:\n");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
