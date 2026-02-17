/*Write a C program that reads a string and two integer positions from the user. Create a function extractSubstring() that prints the substring between the specified starting and ending indices. Ensure that the program checks for invalid positions before extracting the substring.

  Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE*/


#include <stdio.h>

void extractSubstring(char str[], int start, int end) {
    for (int i = start; i <= end; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[100];
    int start, end;

    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("Enter the starting position: ");
    scanf("%d", &start);
    printf("Enter the ending position: ");
    scanf("%d", &end);

    if (start < 0 || end >= len || start > end) {
        printf("Invalid positions.\n");
        return 1;
    }
    printf("Extracted substring: ");
    extractSubstring(str, start, end);

    return 0;
}
