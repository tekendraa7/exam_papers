/*
Write a program to find the sum of following series up to n terms.
Series: 2!+4!+6!+8!+…+upto k terms

*/


#include <stdio.h>

int main() 
{
    int n, i, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int count = 0;
    for (i = 2; count < n; i = i + 2) 
    {
        int fact = 1;
        for (int j = 1; j <= i; j++) 
        {
            fact = fact * j;
        }
        sum = sum + fact;
        count++;
    }

    printf("Sum of factorials is: %d\n", sum);
    
    return 0;
}
