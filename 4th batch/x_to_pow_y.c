// WAP in C to calculate x to the power of y without using pow() function.
#include <stdio.h>

int main() 
{
    int x, y, i, result = 1;
    printf("Enter the base number (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (y): ");
    scanf("%d", &y);
    if (y < 0) 
    {
        printf("Error! Exponent cannot be negative.");
    } else 
    {
        for (i = 1; i <= y; i++) 
        {
            result = result * x;
        }
        printf("%d to the power of %d is %d.", x, y, result);
    }
    return 0;
}
