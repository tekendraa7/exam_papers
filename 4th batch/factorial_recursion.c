// WAP in C to find the factorial of a number using recursion.
#include <stdio.h>

int factorial(int n)
{
    if (n == 0) 
    {
        return 1;
    } 
    else     
    {
        return (n * factorial(n - 1));
    }
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d = %d", num, factorial(num));
    return 0;
}
