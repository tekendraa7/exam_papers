/* Write a program in C to write name, ID and weight of an employee in binary file named "myfile.dat" saved
inside a folder named "personnel" within the D drive. */

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float weight;
};

int main() {
    struct Employee emp;
    FILE *fp;

    // Input employee data
    printf("Enter employee Name, ID and weight: ");
    scanf("%s %d %f", emp.name, &emp.id, &emp.weight);

   
    // File path (Windows-style path for D:\personnel\myfile.dat)
    const char *filePath = "D:\\personnel\\myfile.dat";

    // Open file in binary write mode
    fp = fopen(filePath, "wb");
    if (fp == NULL) {
        printf("Error: Unable to open file. Make sure the folder D:\\personnel exists.\n");
        return 1;
    }

    // Write structure to file
    fwrite(&emp, sizeof(struct Employee), 1, fp);

    printf("Data written to %s successfully.\n", filePath);

    // Close file
    fclose(fp);

    return 0;
}

