// Write a program to count the number
// of vowels in a string without using any string functions.


#include <stdio.h>

int main() {
    char str[25];
    int i = 0, count = 0;
    char ch;

    printf("Enter a string: ");
    scanf("%[^\n]", str); // Reads input including spaces

    while ((ch = str[i]) != '\0') {  // Loop until null terminator
        // Check if character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
        i++;
    }

    printf("Number of vowels: %d\n", count);

    return 0;
}
