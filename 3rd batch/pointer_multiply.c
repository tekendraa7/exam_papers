/*
Write a meaningful program to input elements of a matrix A of order 3*3, multiply all elements of A by 3
to obtain a new matrix B. Multiply these two matrices A and B to get matrix C and then display the
elements of matrix C. Use concept of pointer to complete the code

*/


#include <stdio.h>

#define N 3

// Function declarations
void read(int *matrix);
void display(int *matrix);

int main() {
    int a[N][N], b[N][N], c[N][N];

    printf("Enter 9 elements for Matrix a (3x3):\n");
    read(&a[0][0]);

    // Multiply each element of a by 3 to get matrix b
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
        b[i][j] = 3 * a[i][j];  // b = 3 * a
        }
    }

    // Multiply a and b to get c (Matrix multiplication)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            c[i][j] = 0;
            for (int k = 0; k < N; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nMatrix a (Original):\n");
    display(&a[0][0]);

    printf("\nMatrix b (a multiplied by 3):\n");
    display(&b[0][0]);

    printf("\nMatrix c (a * b):\n");
    display(&c[0][0]);

    return 0;
}

// Function to read elements of the matrix
void read(int *matrix) {
    for (int i = 0; i < N * N; i++) {
        scanf("%d", matrix + i);
    }
}

// Function to display the matrix
void display(int *matrix) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", *(matrix + i * N + j));
        }
        printf("\n");
    }
}
