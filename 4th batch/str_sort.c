/*
) Write-a suitable program to pass an array of strings to a function, sort them in ascending order and
display the result.
*/


#include <stdio.h>
#include <string.h>

// Function to sort the array of strings in ascending order
void sort(char arr[][100], int n) {
    int i, j;
    char temp[100];

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                // Swap strings if arr[i] is greater than arr[j]
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    int n, i;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    char arr[n][100];

    printf("Enter the strings:\n");
    getchar();  // To consume any leftover newline character from the previous scanf
    for (i = 0; i < n; i++) {
        gets(arr[i]);  // Using gets() to input strings
    }

    sort(arr, n);  // Call sort function

    printf("Sorted strings:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
