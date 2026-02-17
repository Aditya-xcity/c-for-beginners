#include <stdio.h>
#include <ctype.h>

int isPalindrome(char *str) {
    int left = 0;
    int right = 0;

    // Find the length of the string manually
    while (str[right] != '\0') {
        right++;
    }
    right--; // Adjust for the last valid index

    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character manually
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

/*
OUTPUT
Enter a string: RaceCar
The string is a palindrome.

Enter a string: Hello
The string is not a palindrome.
*/
