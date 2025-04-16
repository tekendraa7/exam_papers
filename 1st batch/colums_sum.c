/*
Write a program to read two 3*3 square matrices and find the sum of elements of last two columns of
both matrices and display the resultant matrices using pointer. Make three user defined function for
reading, adding and displaying the elements of metrics

*/

#include <stdio.h>

#define N 3

// Function declarations
void read(int *m);
void addCols(int *a, int *b, int *res);
void show(int *res);

int main() 
{
    int a[N][N], b[N][N], res[N][2];

    printf("Enter 9 numbers for Matrix A:\n");
    read(&a[0][0]);

    printf("Enter 9 numbers for Matrix B:\n");
    read(&b[0][0]);

    addCols(&a[0][0], &b[0][0], &res[0][0]);

    printf("\nResulting Matrix (sum of last 2 columns):\n");
    show(&res[0][0]);

    return 0;
}

// Read 9 values into a 3x3 matrix
void read(int *m) 
{
    for (int i = 0; i < N * N; i++) 
    {
        scanf("%d", m + i);
    }
}

// Add the last 2 columns of matrices a and b
void addCols(int *a, int *b, int *res) 
{
    for (int i = 0; i < N; i++) 
    {
        *(res + i * 2 + 0) = *(a + i * N + 1) + *(b + i * N + 1); // Column 2
        *(res + i * 2 + 1) = *(a + i * N + 2) + *(b + i * N + 2); // Column 3
    }
}

// Display 3x2 result matrix
void show(int *res) 
{
    for (int i = 0; i < N; i++) 
    {
        printf("%d\t%d\n", *(res + i * 2), *(res + i * 2 + 1));
    }
}
