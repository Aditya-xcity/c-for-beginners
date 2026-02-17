// Develop a C program to find the number of occurrences of each alphabet 
// in a string entered by the user and display the results on the output screen.
// Assume that the string contains only alphabets and no special characters or digits.

/*  Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE*/

#include<stdio.h>

int main(){
    char str[100];
    int count[26] = {0}; 
    printf("Enter The String: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            count[str[i] - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c - %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}

/*
Example Output:
Input: 
hello
Output:
h - 1
e - 1
l - 2
o - 1

Input:
world
Output:
w - 1
o - 1
r - 1
l - 1
d - 1
*/