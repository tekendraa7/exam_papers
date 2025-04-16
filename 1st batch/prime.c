/*
Write algorithm and make flowchart for the program to check whether the number entered by user
is prime or not
*/


#include <stdio.h>

int main() {
    int n, i, s = 1;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if number is less than or equal to 1
    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
    } else {
        // Check for factors
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                s = 0; // Not prime
                break;
            }
        }

        // Print result
        if (s == 1)
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    }

    return 0;
}
