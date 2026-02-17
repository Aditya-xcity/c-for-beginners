/*Write a C program that reads a sentence from the user and replaces every vowel (both uppercase and lowercase) with the character ‘X’. Print the modified string.
  Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100]; 
    int i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            str[i] = 'X';  
        }
    }
    printf("Modified sentence: %s", str);

    return 0;
}
