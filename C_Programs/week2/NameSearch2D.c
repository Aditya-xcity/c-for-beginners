/*
Program 4: Develop a C program to accept names in a 2D array and search for a name entered by the user.
Display an appropriate message on the output screen if the name is found.

  Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE




*/



#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns of 2D array: ");
    scanf("%d %d", &r, &c);
    
    char s[r][c], search[c];
    int i, j;
    
    
    for(i = 0; i < r; i++) {
        printf("Enter string %d (character by character): ", i+1);
        for(j = 0; j < c; j++) {
            scanf(" %c", &s[i][j]); 
        }
    }

    
    printf("Enter the string to be searched (character by character): ");
    for(j = 0; j < c; j++) {
        scanf(" %c", &search[j]); 
    }

    
    int found = 0;
    for(i = 0; i < r; i++) {
        int match = 1; 
        for(j = 0; j < c; j++) {
            if(s[i][j] != search[j]) {  
                match = 0;  
                break;
            }
        }

        if(match) {
            printf("String found at index %d\n", i);
            found = 1;
            break;  
        }
    }

    if(!found) {
        printf("String not found\n");
    }

    return 0;
}
