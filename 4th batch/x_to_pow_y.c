// WAP in C to calculate x to the power of y without using pow() function.
#include <stdio.h>

// Recursive function to calculate x^y
int power(int x, int y) {
    if (y == 0)
        return 1;
    else
        return x * power(x, y - 1);
}

int main() {
    int base, exponent, result;

    printf("Enter base (x): ");
    scanf("%d", &base);
    
    printf("Enter exponent (y): ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("%d to the power of %d is %d\n", base, exponent, result);

    return 0;
}
