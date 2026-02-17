/*Develop a C program using a user-defined function (UDF) to compare two strings.
The function should return 1 
if the strings are equal and 0 otherwise, without using the inbuilt `strcmp` function.
*/

#include<stdio.h>

int stringcompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 1;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    char str1[100], str2[100];
    gets(str1);
    gets(str2);

    if (stringcompare(str1, str2) == 0) {
        printf("Strings are equal");
    } else {
        printf("Strings are not equal");
    }

    return 0;
}

/*
Example Output:
Input: 
hello
hello
Output:
Strings are equal

Input:
hello
world
Output:
Strings are not equal
*/