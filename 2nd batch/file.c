/*
Write a program to make a file named "fwu_soe.txt", write a string "I Belong To SOE FWU" 
into file and read the same from the file.

*/


#include <stdio.h>

int main() {
    FILE *file;
    char str[50];

    // Step 1: Create and write to file
    file = fopen("fwu_soe.txt", "w");  // "w" = write mode
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(file, "I Belong To SOE FWU");
    fclose(file);  // Close after writing

    // Step 2: Open and read from file
    file = fopen("fwu_soe.txt", "r");  // "r" = read mode
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read and print content
    fgets(str, sizeof(str), file);
    printf("Content read from file: %s\n", str);

    fclose(file);  // Close after reading

    return 0;
}
