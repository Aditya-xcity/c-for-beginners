/*Develop a c program to find the sum and average of given n elements in an array
NAME: ADITYA BHARDWAJ
ROLL NO: 06
SECTION: F1
COURSE: BTech
BRANCH: CSE
*/

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;
    printf("Sum = %f\n", sum);
    printf("Average = %f\n", average);

    return 0;
}
/*OUTPUT
Enter the elements:
3
2
1
4
Sum = 10.000000
Average = 2.500000
*/