/*
    Program 31 Design a C program to add to an existing file present in the current drive by
    reading the contents from another file. Read the names of both the files from the
    user. Display the new file to the console by converting all the alphabets to
    lowercase.

    Name    - ADITYA BHARDWAJ
    Section - F1
    Roll No - 06
    Course  – B TECH
    Branch  – CSE
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char sourceFile[100], targetFile[100];
    FILE *src, *tgt;
    char ch;

    printf("Enter the source file name (to read from): ");
    scanf("%s", sourceFile);

    printf("Enter the target file name (to append into): ");
    scanf("%s", targetFile);

    src = fopen(sourceFile, "r");
    if (src == NULL)
    {
        printf("Error: Could not open source file '%s'.\n", sourceFile);
        return 1;
    }

    tgt = fopen(targetFile, "a");
    if (tgt == NULL)
    {
        printf("Error: Could not open target file '%s'.\n", targetFile);
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, tgt);
    }

    fclose(src);
    fclose(tgt);

    tgt = fopen(targetFile, "r");
    if (tgt == NULL)
    {
        printf("Error: Could not reopen target file.\n");
        return 1;
    }

    printf("\nContent of '%s' in lowercase\n", targetFile);
    while ((ch = fgetc(tgt)) != EOF)
    {
        putchar(tolower(ch));
    }

    fclose(tgt);
    return 0;
}
/*OUTPUT
Enter the source file name (to read from): diary.txt
Enter the target file name (to append into): note.txt

Content of 'note.txt' in lowercase
hello my name is aditya

coding is fun.
PS C:\Users\adity\Desktop\weeks\weeks\week11>
*/