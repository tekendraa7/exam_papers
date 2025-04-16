/*

Write a program to input an integer array of 5 elements in main function.  
Pass that array to function, subtract 4 from each elements,
sort the array in ascending order and display the sorted array 

*/



#include <stdio.h>

void sort(int arr[], int size) {
    int temp;

    // Subtract 4 from each element
    for (int i = 0; i < size; i++) {
        arr[i] -= 4;
    }

    // Sort the array in ascending order using bubble sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                // Swap arr[i] and arr[j]
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[5];

    // Input array elements
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Pass the array to the sort function
    sort(arr, 5);

    // Display the sorted array
    printf("Sorted array in ascending order after subtracting 4 from each element:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
