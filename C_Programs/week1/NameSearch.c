/*develop a c program to accept the names in 2darray and search the name entred by the user display an appropriate 
message to output to screen

using character array 
foreg. a d i t y a */

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);

    char names[n][100]; 

    printf("Enter the names :\n");

    for (int i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        int j = 0;
        char ch;
        while ((ch = getchar()) == '\n'); 
        while (ch != ' ' && ch != '\n') { 
            names[i][j++] = ch;
            ch = getchar();
        }
        names[i][j] = '\0';
    }

    char search[100]; 
    printf("Enter the name to search: ");
    
    int j = 0;
    char ch;
    while ((ch = getchar()) == '\n'); 
    while (ch != ' ' && ch != '\n') { 
        search[j++] = ch;
        ch = getchar();
    }
    search[j] = '\0'; 

    // Searching the name in array
    int found = 0;
    for (int i = 0; i < n; i++) {
        int match = 1;
        for (j = 0; search[j] != '\0' || names[i][j] != '\0'; j++) {
            if (search[j] != names[i][j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Name found in the list!\n");
    else
        printf("Name not found in the list!\n");

    return 0;
}


makichut
