/*

Write a program to input an integer array of 7 elements in main function. 
Pass that array to function, subtract 7 from each elements,
sort the array in descending order and display the sorted array

*/


#include <stdio.h>

void sort(int arr[], int size) {
    int temp;

    // Subtract 7 from each element
    for (int i = 0; i < size; i++) 
    {
        arr[i] -= 7;
    }

    // Sort the array in descending order using bubble sort
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = i + 1; j < size; j++) 
        {
            if (arr[i] < arr[j]) 
            {
                // Swap arr[i] and arr[j]
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[7];

    // Input array elements
    printf("Enter 7 integers:\n");
    for (int i = 0; i < 7; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Pass the array to the sort function
    sort(arr, 7);

    // Display the sorted array
    printf("Sorted array in descending order after subtracting 7 from each element:\n");
    for (int i = 0; i < 7; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
