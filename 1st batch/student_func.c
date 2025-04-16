/*   Create a structure named student that
has name, roll and marks as members. Assume appropriate types and size of members. Use this
structure to read and display records of 10 students. Create two functions: One is to read information of
students and other to display the information

*/

#include <stdio.h>

struct student 
{
    char name[50];
    int roll;
    float marks;
};

void read(struct student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

void display(struct student s[], int n) {
    printf("\nStudent Records:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %.2f\n\n", s[i].marks);
    }
}

int main() {
    struct student students[4];
    read(students, 4);
    display(students, 4);
    return 0;
}
