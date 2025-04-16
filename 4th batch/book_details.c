/*
Write a program to makea file named 'Book.txt'.
Write book_name, ID, price and author_name into the file and display the content of file 



*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char book_name[50], author_name[50];
    int book_id;
    float price;

    // Open file for writing
    fp = fopen("Book.txt", "w");
    if (fp == NULL) {
        printf("Error creating file.\n");
        exit(1);
    }

    // Take input using gets()
    printf("Enter Book Name: ");
    gets(book_name);

    printf("Enter Book ID: ");
    scanf("%d", &book_id);

    printf("Enter Book Price: ");
    scanf("%f", &price);
    getchar(); // Clear newline left in buffer by scanf()

    printf("Enter Author Name: ");
    gets(author_name);

    // Write data to file
    fprintf(fp, "Book Name: %s\n", book_name);
    fprintf(fp, "Book ID: %d\n", book_id);
    fprintf(fp, "Price: %.2f\n", price);
    fprintf(fp, "Author Name: %s\n", author_name);

    fclose(fp);

    // Open file to read and display content
    fp = fopen("Book.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    char ch;
    printf("\nContents of Book.txt:\n\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
        

    fclose(fp);
    return 0;
}
