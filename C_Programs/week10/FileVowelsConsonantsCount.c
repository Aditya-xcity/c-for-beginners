/*
    PROGRAM 28: Write a C program to create a file ThreePara.txt and write any three paragraphs
    of text to it. Display the content of the file and the count of frequency of
    consonants and vowels present in it to the console.
    Note: You may assume a single paragraph in the input stream until you
    encounter a newline character (\n).

    Name - ADITYA BHARDWAJ
    Section - F1
    Roll No - 06
    Course – B TECH
    Branch – CSE
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    FILE *file;
    char ch;
    int vowels = 0, consonants = 0;
    char paragraph[1000];

    file = fopen("ThreePara.txt", "w+");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter your paragraph:\n");

    while (1)
    {
        fgets(paragraph, sizeof(paragraph), stdin);
        if (strcmp(paragraph, "\n") == 0)
            break;
        fputs(paragraph, file);
    }

    rewind(file);

    printf("\nContent of the file 'ThreePara.txt':\n\n");

    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);

        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(file);

    printf("\n\nTotal Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}

/*OUTPUT
Enter your paragraph:
hello
my name is aditya
how are you


Content of the file 'ThreePara.txt':

hello
my name is aditya
how are you


Total Vowels: 13
Total Consonants: 15
PS C:\Users\adity\Desktop\weeks\weeks\week10>
*/