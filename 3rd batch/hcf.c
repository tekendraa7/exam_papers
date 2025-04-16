// WAP a program in C to find HCF of two numbers using functions .
#include <stdio.h>

int hcf(int a, int b) {
    int min = (a < b) ? a : b;
    int hcf = 1;

    for (int i = 1; i <= min; i++) 
    {
        if (a % i == 0 && b % i == 0) 
        {
            hcf = i;
        }
    }

    return hcf;
}

int main() {
    int a, b, value;
    
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);

    value = hcf(a, b);  // Call function to find HCF

    printf("HCF of %d and %d is %d\n", a, b, value);

    return 0;
}
