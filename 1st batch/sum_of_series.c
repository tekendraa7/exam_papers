// WAP in C to find the sum of series 1+11+111+1111+..... +n terms using recursive function.
#include <stdio.h>

// Recursive function to generate the term like 1, 11, 111...
int term(int n) {
    if (n == 1)
        return 1;
    return term(n - 1) * 10 + 1;
}

int main() {
    int n, i, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += term(i);
    }

    printf("Sum of the series is: %d\n", sum);
    return 0;
}
