/* Write a C program to create a Book structure to store title, author, and price,
 input details for three books, store them in a file, read the file to find the most expensive
 and lowest priced books, and display their information.

 Name - ADITYA BHARDWAJ
 Section - F1
 Roll No - 06
 Course – B TECH
 Branch – CSE
*/

#include <stdio.h>
#include <string.h>
int main()
{
    struct Book
    {
        char title[100];
        char author[100];
        float price;
    };

    struct Book books[3];
    FILE *file;

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter details for Book %d:\n", i + 1);
        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0';

        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';

        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar();
    }

    file = fopen("books.dat", "wb");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(books, sizeof(struct Book), 3, file);
    fclose(file);

    file = fopen("books.dat", "rb");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    struct Book readBooks[3];
    fread(readBooks, sizeof(struct Book), 3, file);
    fclose(file);

    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < 3; i++)
    {
        if (readBooks[i].price > readBooks[maxIndex].price)
        {
            maxIndex = i;
        }
        if (readBooks[i].price < readBooks[minIndex].price)
        {
            minIndex = i;
        }
    }

    printf("\nMost Expensive Book:\n");
    printf("Title: %s\n", readBooks[maxIndex].title);
    printf("Author: %s\n", readBooks[maxIndex].author);
    printf("Price: %.2f\n", readBooks[maxIndex].price);

    printf("\nLowest Priced Book:\n");
    printf("Title: %s\n", readBooks[minIndex].title);
    printf("Author: %s\n", readBooks[minIndex].author);
    printf("Price: %.2f\n", readBooks[minIndex].price);

    return 0;
}
/*output
Enter details for Book 1:
Title: let us c
Author: me
Price: 100

Enter details for Book 2:
Title: python
Author: notme
Price: 200

Enter details for Book 3:
Title: java
Author: alsome
Price: 300

Most Expensive Book:
Title: java
Author: alsome
Price: 300.00

Lowest Priced Book:
Title: let us c
Author: me
Price: 100.00

*/