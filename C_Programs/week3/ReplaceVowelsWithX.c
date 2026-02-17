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
