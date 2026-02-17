/*
  Q: Assume a file "Paragraph.txt" is present in the current drive.
     Read the file and convert all the vowels into uppercase,
     then display the modified file to the console.

  Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE
*/

#include <stdio.h>
#include <ctype.h> 

int isVowel(char ch)
{
    
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main()
{
    FILE *file;
    char ch;

    
    file = fopen("Paragraph.txt", "r");

    if (file == NULL)
    {
        printf("Error: Could not open file 'Paragraph.txt'.\n");
        return 1; 
    }

    printf("Modified content of 'Paragraph.txt' with vowels in uppercase:\n\n");

    
    while ((ch = fgetc(file)) != EOF)
    {
        
        if (isVowel(ch))
        {
            ch = toupper(ch);
        }
        
        putchar(ch);
    }

    
    fclose(file);

    return 0;
}

/*
Modified content of 'Paragraph.txt' with vowels in uppercase:

my nAmE Is AdItyA bhArdwAj, And I Am cUrrEntly pUrsUIng b tEch In cOmpUtEr scIEncE
*/
