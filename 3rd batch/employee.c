/*
Write a program to make a structure named employee that have
members as name, id and age. Use this structure to input the above data of 5 employee and display the
same data for those employee. Use concept of passing structure array to function

*/


#include <stdio.h>

struct employee {
    char name[50];
    int id;
    int age;
};

void read(struct employee emp[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details of Employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Age: ");
        scanf("%d", &emp[i].age);
    }
}

void display(struct employee emp[], int n) {
    printf("\n--- Employee Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", emp[i].name);
        printf("ID: %d\n", emp[i].id);
        printf("Age: %d\n\n", emp[i].age);
    }
}

int main() {
    struct employee emp[5];
    read(emp, 5);
    display(emp, 5);
    return 0;
}
