/*
Write a program to make a function that multiplies two matrices of order 3*3 using pointer
and display the resultant matrix.
*/


#include <stdio.h>

// Multiply two 3x3 matrices
void multiply(int *a, int *b, int *res) 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            *(res + i * 3 + j) = 0;
            for (int k = 0; k < 3; k++) 
            {
                *(res + i * 3 + j) += *(a + i * 3 + k) * *(b + k * 3 + j);
            }
        }
    }
}

// Display a 3x3 matrix
void display(int *matrix) 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d\t", *(matrix + i * 3 + j));
        }
        printf("\n");
    }
}

int main() {
    int matrix1[3][3], matrix2[3][3], result[3][3];

    printf("Enter all elements of first matrix:\n");
    for (int i = 0; i < 9; i++) 
    {
        scanf("%d", &((int*)matrix1)[i]);
    }

    printf("Enter all the elements of second matrix:\n");
    for (int i = 0; i < 9; i++) 
    {
        scanf("%d", &((int*)matrix2)[i]);
    }

    multiply((int *)matrix1, (int *)matrix2, (int *)result);

    printf("\nResultant Matrix:\n");
    display((int *)result);

    return 0;
}
