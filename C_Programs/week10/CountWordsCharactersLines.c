/*
    PROGRAM 30: Write a C program to count the number of words, characters, and lines in a text file.

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
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    file = fopen("input.txt", "r");

    if (file == NULL)
    {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        if (ch == '\n')
        {
            lines++;
        }

        if (isspace(ch))
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            inWord = 1;
            words++;
        }
    }

    if (characters > 0 && ch != '\n')
    {
        lines++;
    }

    fclose(file);

    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);
    printf("Number of lines: %d\n", lines);

    return 0;
}
