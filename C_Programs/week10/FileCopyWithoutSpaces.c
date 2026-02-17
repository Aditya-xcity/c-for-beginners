/*
    PROGRAM 29
    Develop a C program to create a file and copy its contents to another file such
    that there is no space between any of the words in the copied file. Display the
    content of the newly copied file to the output screen.

    Name - ADITYA BHARDWAJ
    Section - F1
    Roll No - 06
    Course – B TECH
    Branch – CSE
*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *sourceFile, *targetFile;
    char ch;
    char sourceFileName[100], targetFileName[100];

    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);

    sourceFile = fopen(sourceFileName, "w");
    if (sourceFile == NULL)
    {
        printf("Error creating source file!\n");
        return 1;
    }

    printf("Enter content for the source file:\n");
    getchar();
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, sourceFile);
    }
    fclose(sourceFile);

    printf("Enter the target file name: ");
    scanf("%s", targetFileName);

    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL)
    {
        printf("Error opening source file!\n");
        return 1;
    }

    targetFile = fopen(targetFileName, "w");
    if (targetFile == NULL)
    {
        printf("Error creating target file!\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF)
    {
        if (!isspace(ch))
        {
            fputc(ch, targetFile);
        }
    }

    fclose(sourceFile);
    fclose(targetFile);

    printf("\nContent of the target file (without spaces):\n");
    targetFile = fopen(targetFileName, "r");
    while ((ch = fgetc(targetFile)) != EOF)
    {
        putchar(ch);
    }
    fclose(targetFile);

    return 0;
}

/* OUTPUT
Enter the source file name: sourcetxt
Enter content for the source file (press Ctrl+D to stop):
hello my name is Aditya Bhardwaj
Enter the target file name: target

Content of the target file (without spaces):
hellomynameisAdityaBhardwaj
*/