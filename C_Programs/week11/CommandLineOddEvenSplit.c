/*
    Q: Implement a C program to read 20 integers through command line arguments
    and store them into a file Numbers.txt in the current working path. Then read the
    file Numbers.txt and separate them into two different files odd.txt and even.txt
    such that odd numbers are copied to odd.txt and even numbers are copied to
    even.txt files respectively.

    Name    - ADITYA BHARDWAJ
    Section - F1
    Roll No - 06
    Course  – B TECH
    Branch  – CSE
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *numFile, *oddFile, *evenFile;
    int i, num;

    if (argc != 21)
    {
        printf("Error: Please enter exactly 20 integers as command line arguments.\n");
        return 1;
    }

    numFile = fopen("Numbers.txt", "w");
    if (numFile == NULL)
    {
        printf("Error: Could not create Numbers.txt\n");
        return 1;
    }

    for (i = 1; i <= 20; i++)
    {
        fprintf(numFile, "%s ", argv[i]);
    }
    fclose(numFile);

    numFile = fopen("Numbers.txt", "r");
    if (numFile == NULL)
    {
        printf("Error: Could not open Numbers.txt for reading\n");
        return 1;
    }

    oddFile = fopen("odd.txt", "w");
    evenFile = fopen("even.txt", "w");

    if (oddFile == NULL || evenFile == NULL)
    {
        printf("Error: Could not create output files\n");
        fclose(numFile);
        return 1;
    }

    while (fscanf(numFile, "%d", &num) != EOF)
    {
        if (num % 2 == 0)
        {
            fprintf(evenFile, "%d ", num);
        }
        else
        {
            fprintf(oddFile, "%d ", num);
        }
    }

    fclose(numFile);
    fclose(oddFile);
    fclose(evenFile);

    return 0;
}
/*OUTPUT
gcc 02_cmdline_odd_even_split.c
./a 11 2 7 30 1 22 9 10 5 4 26 3 8 15 16 12 21 20 17 18
Numbers.txt (all values)
odd.txt (only odd numbers)
even.txt (only even numbers)
*/
