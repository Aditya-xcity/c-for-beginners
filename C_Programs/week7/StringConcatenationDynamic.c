/*Program 20:  Write a C program to dynamically allocate memory for two user-input strings, concatenate them into a new dynamically allocated string, print the result and free all allocated memory.

  Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char *str1, *str2, *concatStr;
    int len1, len2;
    printf("Enter Length Of First String: ");
    scanf("%d", &len1);
    str1 = (char *)malloc((len1 + 1) * sizeof(char));
    if (!str1) {
        printf("Memory Allocation Failed\n");
        return 1;
    }
    printf("Enter First String: ");
    scanf("%s", str1);
    printf("Enter Length Of Second String: ");
    scanf("%d", &len2);
    str2 = (char *)malloc((len2 + 1) * sizeof(char));
    if (!str2) {
        printf("Memory Allocation Failed\n");
        free(str1);
        return 1;
    }
    printf("Enter Second String: ");
    scanf("%s", str2);
    concatStr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (!concatStr) {
        printf("Memory Allocation Failed\n");
        free(str1);
        free(str2);
        return 1;
    }
    strcpy(concatStr, str1);
    strcat(concatStr, str2);
    printf("Concatenated String: %s\n", concatStr);
    free(str1);
    free(str2);
    free(concatStr);
    return 0;
}


// OUTPUT
// Enter Length Of First String: 5
// Enter First String: hello
// Enter Length Of Second String: 2
// Enter Second String: hi
// Concatenated String: hellohi
