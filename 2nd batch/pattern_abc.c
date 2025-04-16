/*
e. Write a program to print the following pattern:­
   A 
  ABA 
 ABCBA 
ABCDCBA

*/


#include <stdio.h>

int main() 
{
    int n = 4; 
    
    for (int i = 0; i < n; i++) 
    {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) 
        {
            printf(" ");
        }

        // Print letters from A up to the current letter
        for (int j = 0; j <= i; j++) 
        {
            printf("%c", 'A' + j);
        }

        // Print letters from the current letter back to A
        for (int j = i - 1; j >= 0; j--) 
        {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}
