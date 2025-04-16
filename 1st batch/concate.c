/*
Write a program to concatenate two string constants "Computer" and
"Engineering" without using starcat() function.

*/

#include <stdio.h>

int main() {
    char str1[] = "Computer";
    char str2[] = "Engineering";
    char str3[25];  // Make sure size is enough to hold both + null terminator

    int i = 0, j = 0;

    // Copy str1 to str3
    while (str1[i] != '\0') {
        str3[i] = str1[i];
        i++;
    }

    // Copy str2 to str3 after str1
    while (str2[j] != '\0') {
        str3[i] = str2[j];
        i++;
        j++;
    }

    str3[i] = '\0';  // Null-terminate the final string

    printf("Concatenated string: %s\n", str3);
    return 0;
}
