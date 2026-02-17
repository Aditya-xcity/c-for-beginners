/*Develop a C program to read 'N' characters into an array,
then find and display the character with the maximum ASCII value on the console.
NAME: ADITYA BHARDWAJ
ROLL NO: 06
SECTION: F1
COURSE: BTech
BRANCH: CSE*/
#include <stdio.h>

int main() {
    int n, i, maxIndex = 0;

    printf("Enter the number of characters: ");
    scanf("%d", &n);

    char arr[n];
    printf("Enter the characters:\n");
    for (i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    printf("Character with the maximum ASCII value: %c\n", arr[maxIndex]);

    return 0;
}
/*OUTPUT
Enter the number of characters: 4
Enter the characters:
A
B
C
D
Character with the maximum ASCII value: D
*/