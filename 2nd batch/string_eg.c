/*
Write a program to input a multi-word string and count the number of characters except 'a', 'b' and 'c' if
they are present in the string without using string functions

*/


#include <stdio.h>

int main() {
    char str[20];
    int count = 0, i = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        if (str[i] != 'a' && str[i] != 'b' && str[i] != 'c') {
            count++;
        }
        i++;
    }

    printf("Number of characters excluding 'a', 'b', and 'c': %d\n", count);

    return 0;
}

    
