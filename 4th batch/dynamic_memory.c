/*
Write a suitable program that illustrates the concept of 
malloc(), realloc() and free() functions
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    
    int *a = (int *)malloc(n * sizeof(int));

    
    for (i = 0; i < n; i++) {
        a[i] = i + 1;
    }

    
    int *b = (int *)realloc(a, 2 * n * sizeof(int));

    if (b == NULL) {
        printf("Memory reallocation failed.\n");
        free(a); 
        return 1;
    }

    
    for (i = n; i < 2 * n; i++) {
        b[i] = i * 2;
    }

    
    printf("Updated array:\n");
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", b[i]);
    }


    free(b);
    return 0;
}
