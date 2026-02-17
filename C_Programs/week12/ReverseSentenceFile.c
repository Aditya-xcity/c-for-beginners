/* Write a C Program to read a sentence from the user, later copy that sentence to 
 a file “Data.txt” present in the current drive and then display the contents of the 
 file in reverse to the screen.

 Name - ADITYA BHARDWAJ
 Section - F1
 Roll No - 06
 Course – B TECH
 Branch – CSE

 */

#include <stdio.h>
#include <string.h>



int main() {
    char sentence[1000];
    FILE *file;
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    

    sentence[strcspn(sentence, "\n")] = '\0';
    

    file = fopen("Data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "%s", sentence);
    fclose(file);
    

    file = fopen("Data.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fgets(sentence, sizeof(sentence), file);
    fclose(file);
    
    printf("Reversed sentence: ");
    for (int i = strlen(sentence) - 1; i >= 0; i--) {
        printf("%c", sentence[i]);
    }
    printf("\n");
    
    return 0;
}


/*OUTPUT

Enter a sentence: JAWDRAHB_AYTIDA 
Reversed sentence: ADITYA_BHARDWAJ
*/