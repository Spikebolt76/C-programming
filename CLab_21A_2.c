#include <stdio.h>

// Define the structure for Book
struct Book
{
    char title[100];
    char author[50];
    char publication[50];
    float price;
};

int main()
{
    // Declare an array of 3 Book structures
    struct Book books[3];

    // Read data for 3 books
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter details for book %d:\n", i + 1);

        printf("Enter book title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);

        printf("Enter author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);

        printf("Enter publication: ");
        fgets(books[i].publication, sizeof(books[i].publication), stdin);

        printf("Enter price: ");
        scanf("%f", &books[i].price);

        // To clear the buffer after reading price
        getchar();
    }

    // Display the details of the books
    printf("\nBook Details:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s", books[i].title);
        printf("Author: %s", books[i].author);
        printf("Publication: %s", books[i].publication);
        printf("Price: %.2f\n", books[i].price);
    }

    return 0;
}
