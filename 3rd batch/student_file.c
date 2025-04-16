/*
Write a program to make binary file of any name and 
write name, roll and mark (float) of student into file and read same data from the file.
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *file;
    struct Student student;

    // Writing to binary file (student.dat)
    file = fopen("student.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Input student details
    printf("Enter student name: ");
    scanf("%s", student.name);
    printf("Enter student roll number: ");
    scanf("%d", &student.roll);
    printf("Enter student marks: ");
    scanf("%f", &student.marks);

    // Write the student details to the binary file
    fwrite(&student, sizeof(struct Student), 1, file);
    fclose(file);

    // Reading from binary file (student.dat)
    file = fopen("student.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read the student details from the binary file
    fread(&student, sizeof(struct Student), 1, file);
    printf("\nStudent Details from File:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll);
    printf("Marks: %.2f\n", student.marks);

    fclose(file);
    
    return 0;
}
