// WAP in C to find second largest element in the array having n
 // elements using concept of user defined function.


#include <stdio.h>

// Function to find the second largest number in an array
int second(int arr[], int size) {
    if (size < 2) {
        printf("Array should have at least two elements.\n");
        return -1;
    }

    int max = arr[0], secmax= -1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            secmax = max;
            max = arr[i];
        } else if (arr[i] > secmax && arr[i] != max) {
            secmax = arr[i];
        }
    }

    return secmax;
}

int main() {
    int size;

    // Get the array size
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    // Get array elements
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function and print result
    int large = second(arr, size);
    if (large != -1) {
        printf("The second largest element is: %d\n", large);
    }

    return 0;
}
